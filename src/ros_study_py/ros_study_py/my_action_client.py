import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from ros_study_msgs.action import MyAction

class MyActionClient(Node):
    def __init__(self):
        super().__init__('my_action_client')
        # 액션 클라이언트 생성
        self._action_client = ActionClient(self, MyAction, 'my_action')

    def send_goal(self, value):
        # 목표 메시지 생성
        goal_msg = MyAction.Goal()
        goal_msg.go = value

        # 서버가 뜰 때까지 대기
        self._action_client.wait_for_server()

        # 비동기 목표 전송
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback
        )

        # goal 응답 처리 콜백
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f"Feedback: {feedback_msg.feedback.str}")

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        # 결과 기다리기
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.result_callback)

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.res}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    client = MyActionClient()
    client.send_goal(3.14)
    rclpy.spin(client)

if __name__ == '__main__':
    main()
