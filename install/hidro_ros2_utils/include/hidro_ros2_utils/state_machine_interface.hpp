#pragma once

#include <rclcpp/rclcpp.hpp>

#include "hidro_ros2_utils/srv/transition_command.hpp"
#include "hidro_ros2_utils/msg/state_machine_status.hpp"

#include "hidro_utils/state_machine.hpp"

namespace hidro_ros2_utils
{

class StateMachineInterface : virtual public rclcpp::Node
{
  public:
    StateMachineInterface(const std::string& node_name);
    ~StateMachineInterface();

  protected:
    hidro_utils::StateMachineDefaultPtr state_machine_;

  private:
    void transitionRequest(const std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand::Request>  request,
                           const std::shared_ptr<hidro_ros2_utils::srv::TransitionCommand::Response> response);

    virtual bool transEnableCallback(std::string& message)  = 0;
    virtual bool transStartCallback(std::string& message)   = 0;
    virtual bool transDisableCallback(std::string& message) = 0;
    virtual bool transStopCallback(std::string& message)    = 0;

    void timerPublishStateCallback();

  private:
    // Services
    rclcpp::Service<hidro_ros2_utils::srv::TransitionCommand>::SharedPtr service_sm_transition_;

    rclcpp::CallbackGroup::SharedPtr cb_group_srv_;

    rclcpp::Publisher<hidro_ros2_utils::msg::StateMachineStatus>::SharedPtr pub_status_;

    rclcpp::TimerBase::SharedPtr timer_status_pub_;

    std::chrono::duration<double> status_pub_period_;

    hidro_ros2_utils::msg::StateMachineStatus state_machine_status_msg_;
};
}  // namespace hidro_ros2_utils