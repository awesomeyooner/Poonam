#ifndef GAMEPAD_MAPPING_HPP
#define GAMEPAD_MAPPING_HPP

/**
 * @brief Stores the indexes of each axis / button
 * for where they are in their respective arrays in the `joy_msg`
 * 
 */
struct GamepadMapping
{
    int stick_left_x;
    int stick_left_y;
    int stick_right_x;
    int stick_right_y;

    int trigger_left;
    int trigger_right;

    int bumper_left;
    int bumper_right;

    int button_down;
    int button_right;
    int button_left;
    int button_up;

    int button_left_stick;
    int button_right_stick;
    
}; // struct GamepadMapping

#endif // GAMEPAD_MAPPING_HPP