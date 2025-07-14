#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ros_study_msgs/action/my_action.hpp"

class MyActionClient : public rclcpp::Node
{
public:
  using MyAction = ros_study_msgs::action::MyAction;
  using GoalHandleMyAction = rclcpp_action::ClientGoalHandle<MyAction>;

  MyActionClient()
  : Node("my_action_client")
  {
    // 액션 클라이언트 생성
    client_ = rclcpp_action::create_client<MyAction>(this, "my_action");

    // 서버 대기
    if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available.");
      rclcpp::shutdown();
      return;
    }

    // 목표 메시지 생성
    auto goal_msg = MyAction::Goal();
    goal_msg.go = 3.14;

    // 전송 옵션 설정 (피드백, 결과 콜백)
    auto send_goal_options = rclcpp_action::Client<MyAction>::SendGoalOptions();
    send_goal_options.feedback_callback = std::bind(&MyActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
    send_goal_options.result_callback = std::bind(&MyActionClient::result_callback, this, std::placeholders::_1);

    // 비동기 목표 전송
    client_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<MyAction>::SharedPtr client_;

  // 피드백 콜백
  void feedback_callback(GoalHandleMyAction::SharedPtr,
                         const std::shared_ptr<const MyAction::Feedback> feedback)
  {
    for (const auto &s : feedback->str) {
      RCLCPP_INFO(this->get_logger(), "Feedback: %s", s.c_str());
    }
  }

  // 결과 콜백
  void result_callback(const GoalHandleMyAction::WrappedResult &result)
  {
    RCLCPP_INFO(this->get_logger(), "Result: %f", result.result->res);
    rclcpp::shutdown();
  }
};


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyActionClient>());
  rclcpp::shutdown();
  return 0;
}
