#include "handles/gamepad.hpp"


Gamepad::Gamepad(GamepadMapping mapping)
{
    initialize(mapping);

} // end of constructor


void Gamepad::initialize(GamepadMapping mapping)
{
    // Initialze the status struct
    m_status = GamepadMapping(mapping);

    // Configure the axes map
    m_axes[m_status.m_stick_left_x.get_id()] = &m_status.m_stick_left_x;
    m_axes[m_status.m_stick_left_y.get_id()] = &m_status.m_stick_left_y;

    m_axes[m_status.m_stick_right_x.get_id()] = &m_status.m_stick_right_x;
    m_axes[m_status.m_stick_right_y.get_id()] = &m_status.m_stick_right_y;

    m_axes[m_status.m_trigger_left.get_id()] = &m_status.m_trigger_left;
    m_axes[m_status.m_trigger_right.get_id()] = &m_status.m_trigger_right;

    // Configure the buttons map
    m_buttons[m_status.m_bumper_left.get_id()] = &m_status.m_bumper_left;
    m_buttons[m_status.m_bumper_right.get_id()] = &m_status.m_bumper_right;

    m_buttons[m_status.m_button_down.get_id()] = &m_status.m_button_down;
    m_buttons[m_status.m_button_right.get_id()] = &m_status.m_button_right;
    m_buttons[m_status.m_button_left.get_id()] = &m_status.m_button_left;
    m_buttons[m_status.m_button_up.get_id()] = &m_status.m_button_up;

    m_buttons[m_status.m_button_left_stick.get_id()] = &m_status.m_button_left_stick;
    m_buttons[m_status.m_button_right_stick.get_id()] = &m_status.m_button_right_stick;

} // end of "initialize"


void Gamepad::update(const sensor_msgs::msg::Joy& joy_packet)
{
    m_status.update(joy_packet);

} // end of "update"


Button* Gamepad::get_button(int id)
{
    return m_buttons[id];

} // end of "get_button"


Axis* Gamepad::get_axis(int id)
{
    return m_axes[id];

} // end of "get_axis"