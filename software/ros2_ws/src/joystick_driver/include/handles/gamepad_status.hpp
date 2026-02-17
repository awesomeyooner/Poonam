#ifndef GAMEPAD_STATUS_HPP
#define GAMEPAD_STATUS_HPP

#include <map>
#include <vector>

#include "sensor_msgs/msg/joy.hpp"

#include "handles/gamepad_mapping.hpp"
#include "handles/axis.hpp"
#include "handles/button.hpp"
#include "universal_ids.hpp"


/**
 * @brief Contains all Axis and Buttons of a standard gamepad controller (like an XBox controller)
 * 
 */
class GamepadStatus
{

    public:

        // Joystick Axes
        Axis m_stick_left_x;
        Axis m_stick_left_y;
        Axis m_stick_right_x;
        Axis m_stick_right_y;

        // Trigger Axes
        Axis m_trigger_left;
        Axis m_trigger_right;

        // Bumper / shoudler Buttons
        Button m_bumper_left;
        Button m_bumper_right;

        // Action Buttons
        Button m_button_down;
        Button m_button_right;
        Button m_button_left;
        Button m_button_up;

        // Joystick Pushdown
        Button m_button_left_stick;
        Button m_button_right_stick;


        GamepadStatus() = default;

        /**
         * @brief Assigns the mappings for each axis from the given mappings struct
         * 
         * @param mappings `GamepadMapping` The gamepad mapping (the index of each button / axis)
         */
        GamepadStatus(GamepadMapping mappings);

        /**
         * @brief Update the current values of all axes and buttons given
         * the array of axis and button values
         * 
         * @param axes `std::vector<float>` - The array of axis data
         * @param buttons `std::vector<int>` - The array of button data
         */
        void update(std::vector<float> axes, std::vector<int> buttons);

        /**
         * @brief Update the values of all axes and buttons directly from
         * a `joy_msg`
         * 
         * @param joy_packet `sensor_msgs::msg::Joy` - The `joy_msg` 
         */
        void update(sensor_msgs::msg::Joy joy_packet);

    private:
        

}; // class GamepadStatus

#endif // GAMEPAD_STATUS_HPP