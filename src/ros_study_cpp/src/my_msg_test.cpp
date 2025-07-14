#include "rclcpp/rclcpp.hpp"
#include "ros_study_msgs/msg/my_msg.hpp"
//ros2 운용시 기본적으로 들어가는 모듈
//인터페이스도 추가

class MyMsgPublisher : public rclcpp::Node //파이썬처럼 Node를 상속해서 클래스를 만듦
{
public:
  MyMsgPublisher()  //똑같이 생성자 있음
  : Node("my_msg_test"), count_(0.0) //노드의 이름을 정의
  {
    publisher_ = this->create_publisher<ros_study_msgs::msg::MyMsg>("MyMsg", 10);
    //퍼블리셔 생성 스마트 포인터로 만듦 하단의 private에 스마트포인터 정의
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500), //시간 주기 파이썬에서 0.5가 500
      std::bind(&MyMsgPublisher::timer_callback, this)); //토픽이 발행되는 동안 할 일
  }

private:
  rclcpp::Publisher<ros_study_msgs::msg::MyMsg>::SharedPtr publisher_; // 스마트 포인터
  //c++은 가비지 컬렉터가 없어서 스마트 포인터로 메모리 할당 후 반환
  rclcpp::TimerBase::SharedPtr timer_; //토픽 발행 주기에 맞게 스마트 포인터가 메모리 할당 반환
  float count_;

  void timer_callback()
  {
    auto message = ros_study_msgs::msg::MyMsg();
    message.num = count_; //count_ 변수선언
    publisher_->publish(message); // 스마트 포인터 퍼블리셔로 해당 메시지 가져옴
    RCLCPP_INFO(this->get_logger(), "Publishing: %f", count_); //얘가 로그를  찍는 방법 서식지정자를 활용해서 로그를 찍는다
    count_ += 1.0;
  }


};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MyMsgPublisher>());
  rclcpp::shutdown();
  return 0;
}