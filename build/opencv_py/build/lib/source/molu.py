import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import mediapipe as mp
import cv2

#이미지 덮어 씌우는 함수
def overlay_image(background, overlay, x, y, w, h): #background 영상 들어가는 변수 overlay 덮어씌울 이미지 변수
    """배경 위에 오버레이 이미지를 특정 위치(x, y)에 덮어씌우기"""
    overlay_resized = cv2.resize(overlay, (w, h), interpolation=cv2.INTER_AREA)
    #덮어씌울 이미지 변수 overlay 사진 크기 재정의 해서 변수에 저장

    # 채널 분리
    overlay_rgb = overlay_resized[:, :, :3]  # RGB
    overlay_alpha = overlay_resized[:, :, 3] / 255.0  # Alpha

    # 배경과 오버레이 합성 for문으로 이미지 영역 덮어씌울 이미지로 덮음
    for c in range(3):  # RGB 채널 반복
        background[y:y+h, x:x+w, c] = (
            overlay_alpha * overlay_rgb[:, :, c] +
            (1 - overlay_alpha) * background[y:y+h, x:x+w, c]
        )


class Molu(Node):
    def __init__(self):
        super().__init__('molu_node')
        #서브스크라이브 생성
        self.subscription = self.create_subscription(
            Image, 
            'image_raw', #카메라 노드의 토픽
            self.image_callback, #여기서 얼굴 검출 이미지 덮는 함수가 실행
            10)
        self.img_pub = self.create_publisher(Image, 'molu', 10) #이미지 덮어진 영상 토픽으로 발행
        self.subscription  # Prevent unused variable warning

        # Used to convert between ROS and OpenCV images
        self.bridge = CvBridge() #변환 함수저장 변수

        # Load YOLOv8 model
      #  self.model = YOLO('/home/rokey/Downloads/yolov8_forros/yolov8n.pt')  # 욜로 로드

    def image_callback(self, msg): #msg 영상 토픽
        # Convert ROS Image message to OpenCV image
        cv_img = self.bridge.imgmsg_to_cv2(msg, "bgr8") #영상을 cv로 변한해서 변수에 저장
        mp_drawing = mp.solutions.drawing_utils
        mp_face_detection = mp.solutions.face_detection
        # 덮어씌울 이미지 경로 저장한 변수
        img_path = '/home/youngmo/ros2_ws/src/config/20.png'
        #img_path 경로에서 이미지 불러와서 저장

        overlay_img =  cv2.imread(img_path, cv2.IMREAD_UNCHANGED) #이미지 경로 
        
        with mp_face_detection.FaceDetection(model_selection = 0, min_detection_confidence = 0.7) as face_detection:
            results = face_detection.process(cv2.cvtColor(cv_img, cv2.COLOR_BGR2RGB)) #cv_img 가 토픽을 cv로 변환해서 저장하는 변수
            #results 변수가 얼굴을 찾아낸 변수
            if results.detections:
                    for detection in results.detections: #results에서 얼굴을 찾으면 좌표를 찍음
                        bboxC = detection.location_data.relative_bounding_box
                        ih, iw, _ = cv_img.shape
                        x, y, w, h = int(bboxC.xmin *iw), int(bboxC.ymin *ih), int(bboxC.width *iw), int(bboxC.height *ih)
                        # 좌표 범위 확인
                        x = max(0, x)
                        y = max(0, y)
                        w = min(w, iw - x)  # 얼굴 영역 너비 초과 방지
                        h = min(h, ih - y)  # 얼굴 영역 높이 초과 방지



                        # 얼굴 영역에 모자이크 적용
                        overlay_image(cv_img, overlay_img, x, y, w, h)
                        #이 함수 실행되면 cv_img에 이미지 덮어 씌움

        # Publish the annotated image
            img_msg = self.bridge.cv2_to_imgmsg(cv_img, encoding="bgr8") #인식영역을 영상에 넣음
            self.img_pub.publish(img_msg) #인식영역이 들어간 영상 송출

def main(args=None):
    # Initialize the rclpy library
    rclpy.init(args=args)

    # Create the YOLOv8 node
    node = Molu()

    # Spin the node so the callback function is called
    rclpy.spin(node)

    # Destroy the node explicitly
    node.destroy_node()

    # Shutdown the ROS client library for Python
    rclpy.shutdown()

if __name__ == '__main__':
    main()
