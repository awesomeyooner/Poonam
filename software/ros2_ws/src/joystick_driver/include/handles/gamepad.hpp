#ifndef GAMEPAD_HPP
#define GAMEPAD_HPP


#include "handles/axis.hpp"
#include "handles/button.hpp"
#include "handles/gamepad_mapping.hpp"
#include "handles/gamepad_status.hpp"


/**
 * @brief Handles the statuses of all Buttons and Axes, and allows for
 * easy naming convention from unified ID system
 * 
 */
class Gamepad
{

    public:

        Gamepad() = default;

        /**
         * @brief Assigns each button and axis to their corresponding 
         * universal IDs and Indexes
         * 
         * @param mapping `GamepadMapping` - The mapping this gamepad is
         * associated with
         */
        Gamepad(GamepadMapping mapping);

        /**
         * @brief Assigns each button and axis to their corresponding 
         * universal IDs and Indexes
         * 
         * @param mapping `GamepadMapping` - The mapping this gamepad is
         * associated with
         */
        void initialize(GamepadMapping mapping);

        /**
         * @brief Updates the button and axis values given the incoming packet
         * 
         * @param joy_packet `const sensor_msgs::msg::Joy&` - The incoming packet
         * full of new data
         */
        void update(const sensor_msgs::msg::Joy& joy_packet);

        /**
         * @brief Gets the button handle given the Universal ID
         * 
         * @param id `int` - The Universal ID this button is associated with.
         * @return `Button*` - Pointer to the button handle 
         */
        Button* get_button(int id);

        /**
         * @brief Gets the axis handle given the Universal ID
         * 
         * @param id `int` - The Universal ID this axis is associated with.
         * @return `Button*` - Pointer to the axis handle 
         */
        Axis* get_axis(int id);

    private:

        // The status to contain all button and axis handles
        GamepadStatus m_status;

        // Map containing pointers to all Buttons at their corresponding
        // Universal ID
        std::map<int, Button*> m_buttons;

        // Map containing pointers to all Axes at their corresponding
        // Universal ID
        std::map<int, Axis*> m_axes;
    
}; // end of "Gamepad"

#endif // GAMEPAD_HPP