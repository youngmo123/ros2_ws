#include "rclcpp/rclcpp.hpp"
#include "ros_study_msgs/msg/my_msg.hpp"

using std::placeholders::_1;

class MyMsgSubscriber : public rclcpp::Node
{
public:
  MyMsgSubscriber()
  : Node("my_msg_subscriber")
  {
    // QoS 프로필 생성 (default 기반, queue depth 10)
    auto qos = rclcpp::QoS(rclcpp::QoSInitialization::from_rmw(rmw_qos_profile_default));
    qos.keep_last(10);

    // 구독자 생성
    subscription_ = this->create_subscription<ros_study_msgs::msg::MyMsg>(
      "MyMsg",                                    // 토픽 이름
      qos,                                        // QoS 프로필
      std::bind(&MyMsgSubscriber::topic_callback, this, _1)  // 콜백 함수
    );
  }

private:
  // 구독자 객체
  rclcpp::Subscription<ros_study_msgs::msg::MyMsg>::SharedPtr subscription_;

  // 콜백 함수
  void topic_callback(const ros_study_msgs::msg::MyMsg::SharedPtr msg)
  {
    RCLCPP_INFO(this->get_logger(), "Received: %f", msg->num);
  }
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyMsgSubscriber>());
  rclcpp::shutdown();
  return 0;
}
