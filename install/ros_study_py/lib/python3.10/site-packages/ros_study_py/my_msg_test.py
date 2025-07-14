import rclpy #ROS2 사용하는데 기본적으로 들어가는 모듈
from rclpy.node import Node #ROS2 사용하는데 기본적으로 들어가는 클래스 밑에서 상속
from rclpy.qos import QoSProfile #토픽은 불특정 다수에게 발행을 하는데 해당 qos가 같아야 수신가능
from ros_study_msgs.msg import MyMsg #우리가 정의한 인터페이스 사용명시

class my_msg_test(Node):
    def __init__(self):
        super().__init__('my_msg_test') # Node 클래스의 것을 전부 상속 받으며 우리가 만든 노드 이름 정의 my_msg_test
        qos_profile = QoSProfile(depth=10) # qos를 10이라 정의
        self.publisher_ = self.create_publisher(MyMsg, 'MyMsg',qos_profile) #토픽을 발행하는 퍼블리셔 발행하는 토픽 이름 'Mymsg', qos도 정의
        timer_period = 0.5 #second 토픽을 발행하는 주기
        self.timer = self.create_timer(timer_period, self.timer_callback) #토픽 발행 주기가 적용
        self.i = 0.0
        
    def timer_callback(self): # 토픽이 발행될 때마다 하는 것
        msg = MyMsg() #우리가 만든 인터페이스 num
        msg.num = float(self.i) #0.0
        self.publisher_.publish(msg) #해당 인터페이스를 퍼블리싱
        self.get_logger().info(str(self.i))
        #로그를 찍는 함수 단순히 로그만 찍는게 아니라 콘솔에도 값을 찍어줌
        self.i += 1
        
def main(args=None): #노드를 실행하는 기본함수 구조
    rclpy.init(args=args)
    
    my_msg_test_publisher = my_msg_test()
    
    rclpy.spin(my_msg_test_publisher)
    
    my_msg_test_publisher.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()