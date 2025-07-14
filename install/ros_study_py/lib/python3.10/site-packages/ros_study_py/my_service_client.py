import rclpy
from rclpy.node import Node
from ros_study_msgs.srv import MySrv

class MyServiceClient(Node):
    def __init__(self):
        super().__init__('my_service_client')
        # 서비스 클라이언트 생성
        self.cli = self.create_client(MySrv, 'my_service')

        # 서비스 서버가 뜰 때까지 대기
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')

        # 요청 메시지 생성
        self.req = MySrv.Request()
        self.req.num = 3.14

        # 비동기 서비스 호출
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    node = MyServiceClient()

    # 서비스 응답이 올 때까지 스핀
    rclpy.spin_until_future_complete(node, node.future)

    if node.future.result() is not None:
        node.get_logger().info(f"Result: {node.future.result().res}")
    else:
        node.get_logger().error('Service call failed')

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
