import rclpy
from rclpy.node import Node
from ros_study_msgs.srv import MySrv

class MyServiceServer(Node):
    def __init__(self):
        super().__init__('my_service_server')
        # 노드 이름 정의
        self.srv = self.create_service(MySrv, 'my_service', self.callback)
        # 서비스서버 만드는 함수 서비스 이름도 정의
        self.get_logger().info('Service server ready')

    def callback(self, request, response):
        #request, response를 어떻게 주고 받냐?
        self.get_logger().info(f'Received request: num={request.num}')
        response.res = request.num * 2.0  # 예: 두 배로 반환
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MyServiceServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
