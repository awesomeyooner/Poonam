#include "joystick_node.hpp"

using std::placeholders::_1;

//0 left x 
//1 left y
//2 left trigger

//3 right x
//4 right y
//5 right trigger
Joystick::Joystick() : Node("joystick_teleop")
{
    this->declare_parameter<std::string>("joystick_type", "ps4");
    this->declare_parameter<double>("max_tangential_velocity", 1);
    this->declare_parameter<double>("max_angular_velocity", 3.14);

    std::string joystick_type = this->get_parameter("joystick_type").as_string();

    if(joystick_type == "ps4")
      gamepad.initialize(PS4::MAP);
    else if(joystick_type == "xbox")
      gamepad.initialize(Xbox::MAP);
    else if(joystick_type == "gamesir")
      gamepad.initialize(GameSir::MAP);
    
    // rclcpp::Parameter
    max_tan = this->get_parameter("max_tangential_velocity").as_double();
    max_ang = this->get_parameter("max_angular_velocity").as_double();

    publisher = this->create_publisher<geometry_msgs::msg::TwistStamped>("cmd_vel", 10);
    subscription = this->create_subscription<sensor_msgs::msg::Joy>(
    "joy", 10, std::bind(&Joystick::topic_callback, this, _1));
}

void Joystick::topic_callback(const sensor_msgs::msg::Joy& message) {
  //RCLCPP_INFO(this->get_logger(), "I heard: '%f'", msg.axes[0]);

  gamepad.update(message);

  if(gamepad.get_button(PS4::X)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed X");
  
  if(gamepad.get_button(PS4::X)->on_release())
    RCLCPP_INFO(this->get_logger(), "released X");

  if(gamepad.get_button(PS4::CIRCLE)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed CIRCLE");

  if(gamepad.get_button(PS4::SQUARE)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed SQUARE");

  if(gamepad.get_button(PS4::TRIANGLE)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed TRIANGLE");

  if(gamepad.get_button(PS4::LEFT_STICK)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed LEFT STICk");

  if(gamepad.get_button(PS4::RIGHT_STICK)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed RIGHT STICK");

  if(gamepad.get_button(PS4::LEFT_BUMPER)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed LEFT BUMPER");

  if(gamepad.get_button(PS4::RIGHT_BUMPER)->on_press())
    RCLCPP_INFO(this->get_logger(), "pressed RIGHT BUMPER");

  auto twist_stamped = geometry_msgs::msg::TwistStamped();

  twist_stamped.header.frame_id = "command_velocity";
  twist_stamped.header.stamp = this->now();

  twist_stamped.twist.linear.x = gamepad.get_axis(GamepadAxis::LEFT_Y)->get() * max_tan;
  twist_stamped.twist.angular.z = gamepad.get_axis(GamepadAxis::RIGHT_X)->get() * max_ang;

  publisher->publish(twist_stamped);
  
}