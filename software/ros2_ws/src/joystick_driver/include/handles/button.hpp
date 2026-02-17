#ifndef BUTTON_HPP
#define BUTTON_HPP


#include <vector>


/**
 * @brief Button Handle for storing actions and mappings
 * 
 */
class Button 
{
    public:

        Button() = default;

        /**
         * @brief Creates a new button handle with the given universal ID
         * and index in the joy_msg
         * 
         * @param index `int` - The index in the `joy_msg` array this
         * corresponds to 
         * @param id `int` - The Universal ID this corresponds to. Use
         * the `GamepadButton` namespace
         */
        Button(int index, int id);

        /**
         * @brief Gets the current state of the button.
         * This is the same as saying "is pressed?"
         * 
         * @return `TRUE` if pressed, `FALSE` if not pressed
         */
        bool is_pressed();

        /**
         * @brief Gets if the button has been pressed / when the state
         * goes from NOT PRESSED to PRESSED. This will only be true for ONE LOOP
         * (until `update(...)` is called)
         * 
         * @return `TRUE` if the state goes from `NOT PRESSED` to `PRESSED`
         */
        bool on_press();

        /**
         * @brief Gets if the button has been pressed / when the state
         * goes from PRESSED to NOT PRESSED. This will only be true for ONE LOOP
         * (until `update(...)` is called)
         * 
         * @return `TRUE` if the state goes from `PRESSED` to `NOT PRESSED`
         */
        bool on_release();

        /**
         * @brief Update the button state to the new given state
         * 
         * @param is_pressed `bool` - The new state of the button.
         * `TRUE` if pressed, `FALSE` if not pressed
         */
        void update(bool is_pressed);

        /**
         * @brief Update the button state given the array of buttons
         * 
         * @param buttons `std::vector<int>` - The array of buttons from
         * the `joy_msg`
         */
        void update(std::vector<int> buttons);

        /**
         * @brief Returns this button's Universal ID
         * 
         * @return `int` - The universal ID 
         */
        int get_id();

        /**
         * @brief Returns this button's index in the `joy_msg`
         * 
         * @return int 
         */
        int get_index();


    private:

        // What universal ID this is, EX: GamepadButton::ACTION_DOWN
        int m_universal_id;

        // What index this button is from the `joy_msg`
        int m_index_in_msg;

        // True if the button is currently pressed, false otherwise
        bool m_is_pressed;
        
        // The state of the button in the previous loop
        // True if pressed, false if not pressed
        bool m_previously_pressed;

        // True for ONE LOOP (until `update(...)` is called) 
        // when the state goes from NOT PRESSED to PRESSED
        bool m_on_press;

        // True for ONE LOOP (until `update(...)` is called)
        // when the state goes from PRESSED to NOT PRESSED
        bool m_on_release;


}; // struct Button

#endif // BUTTON_HPP