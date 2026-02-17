#ifndef JOYSTICK_NODE_HPP
#define JOYSTICK_NODE_HPP


#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"

#include "handles/gamepad.hpp"
#include "preconfigured_mappings.hpp"

class Joystick : public rclcpp::Node
{

    public:

        Joystick();

    private:

        void topic_callback(const sensor_msgs::msg::Joy& message);

        rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription;
        rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr publisher;

        Gamepad gamepad;

        double max_tan;
        double max_ang;


}; // class Joystick : public rclcpp::Node


#endif // JOYSTICK_NODE_HPP