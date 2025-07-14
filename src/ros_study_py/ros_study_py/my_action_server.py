import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from ros_study_msgs.action import MyAction
from rclpy.qos import QoSProfile
import time

class MyActionServer(Node):
    def __init__(self):
        super().__init__('my_action_server')
        # 액션 서버 생성
        self._action_server = ActionServer(
            self,
            MyAction,
            'my_action',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info(f'Received goal request: go={goal_handle.request.go}')

        feedback_msg = MyAction.Feedback()
        feedback_msg.str = []

        # 피드백 반복 전송 예시
        for i in range(5):
            feedback_msg.str.append(f"Step {i}")
            self.get_logger().info(f'Sending feedback: {feedback_msg.str}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1.0)

        # 목표 성공 처리
        goal_handle.succeed()

        # 최종 결과 생성
        result = MyAction.Result()
        result.res = goal_handle.request.go * 2.0
        return result


def main(args=None):
    rclpy.init(args=args)
    node = MyActionServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
