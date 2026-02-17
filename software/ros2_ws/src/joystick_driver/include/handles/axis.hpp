#ifndef AXIS_HPP
#define AXIS_HPP


#include <vector>


class Axis
{

    public:

        Axis() = default;

        /**
         * @brief Creates a new Axis Handle with the given universal ID
         * and index in the `joy_msg`
         * 
         * @param index `int` - The index in the array of the `joy_msg`
         * @param id `int` - The Universal ID that this is associated with.
         * Refer to the `GamepadAxis` namespace
         */
        Axis(int index, int id);

        /**
         * @brief Gets the current axis value
         * 
         * @return `double` - The axis value 
         */
        double get();

        /**
         * @brief Update the current value of the axis
         * 
         * @param value `double` - The new value
         */
        void update(double value);

        /**
         * @brief Update the current value given the array of axes
         * 
         * @param axes 
         */
        void update(std::vector<float> axes);

        /**
         * @brief Returns this axis's Universal ID
         * 
         * @return `int` - The universal ID 
         */
        int get_id();

        /**
         * @brief Returns this axis's index in the `joy_msg`
         * 
         * @return int 
         */
        int get_index();

        /**
         * @brief Shorthand for getting if the axis value is greater than
         * the given threshold
         * 
         * @param threshold `double` - The value to compare
         * @return `TRUE` if the current value is greater than the threshold.
         * `FALSE` otherwise
         */
        bool is_greater_than(double threshold);

        /**
         * @brief Shorthand for getting if the axis value is less than
         * the given threshold
         * 
         * @param threshold `double` - The value to compare
         * @return `TRUE` if the current value is less than the threshold.
         * `FALSE` otherwise
         */
        bool is_less_than(double threshold);

        /**
         * @brief Shorthand for getting if the axis is within the specified
         * lower and upper bounds
         * 
         * @param lower_bound `double` - The lower bound threshold
         * @param upper_bound `double` - The upper bound threshold
         * @return `TRUE` if the current value is within `lower_bound` and `upper_bound`
         */
        bool is_within(double lower_bound, double upper_bound);

    private:

        // What universal ID this is, EX: GamepadButton::ACTION_DOWN
        int m_universal_id;

        // What index this button is from the `joy_msg`
        int m_index_in_msg;

        // The current value of this axis
        double m_value;

}; // end of "Axis"


#endif // AXIS_HPP