import argparse
import sys
import rclpy
from ex_calculator_py.checker.checker import Checker
def main(args=None):
    import sys
    import argparse
    import rclpy
    from ex_calculator_py.checker.checker import Checker
    parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('-g', '--goal_total_sum', type=int, default=50, help='Target goal value of total sum')
    # parse_known_args를 사용!
    parsed_args, remaining = parser.parse_known_args(args)
    rclpy.init(args=remaining)
    try:
        checker = Checker()
        checker.send_goal_total_sum(parsed_args.goal_total_sum)
        try:
            rclpy.spin(checker)
        except KeyboardInterrupt:
            checker.get_logger().info('KeyboardInterrupt(SIGINT)')
        finally:
            checker.arithmetic_action_client.destroy()
            checker.destroy_node()
    finally:
        rclpy.shutdown()
if __name__ == '__main__':
    main()