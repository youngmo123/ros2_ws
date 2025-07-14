#include "rclcpp/rclcpp.hpp"
#include "ros_study_msgs/srv/my_srv.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("my_service_client");

  // 서비스 클라이언트 생성
  auto client = node->create_client<ros_study_msgs::srv::MySrv>("my_service");

  // 서비스 서버가 뜰 때까지 대기
  while (!client->wait_for_service(std::chrono::seconds(1))) {
    RCLCPP_INFO(node->get_logger(), "Waiting for service...");
  }

  // 요청 생성
  auto request = std::make_shared<ros_study_msgs::srv::MySrv::Request>();
  request->num = 3.14;

  // 비동기 서비스 요청 전송
  auto future = client->async_send_request(request);

  // 응답이 올 때까지 스핀
  if (rclcpp::spin_until_future_complete(node, future) == rclcpp::FutureReturnCode::SUCCESS) {
    RCLCPP_INFO(node->get_logger(), "Result: %f", future.get()->res);
  } else {
    RCLCPP_ERROR(node->get_logger(), "Service call failed");
  }

  rclcpp::shutdown();
  return 0;
}
