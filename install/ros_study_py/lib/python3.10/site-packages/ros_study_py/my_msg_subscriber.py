import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from ros_study_msgs.msg import MyMsg

class MyMsgSubscriber(Node):
    def __init__(self):
        super().__init__('my_msg_subscriber')
        qos_profile = QoSProfile(depth=10)
        self.subscription = self.create_subscription(
            MyMsg,                # 메시지 타입
            'MyMsg',              # 토픽 이름
            self.listener_callback,  # 콜백 함수
            qos_profile           # QoS 설정
        )
        self.subscription  # unused warning 방지

    def listener_callback(self, msg):
        self.get_logger().info(f'Received: {msg.num}')

def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MyMsgSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
