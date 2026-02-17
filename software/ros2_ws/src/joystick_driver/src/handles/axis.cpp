#include "handles/axis.hpp"

Axis::Axis(int index, int id) : 
    m_index_in_msg(index), m_universal_id(id)
{
    // Default
    m_value = 0;

} // end of constructor


double Axis::get()
{
    return m_value;

} // end of "get"


void Axis::update(double value)
{
    m_value = value;

} // end of "update"


void Axis::update(std::vector<float> axes)
{
    update(axes.at(m_index_in_msg));
    
} // end of "update"


int Axis::get_id()
{
    return m_universal_id;

} // end of "get_id"


int Axis::get_index()
{
    return m_index_in_msg;

} // end of "get_index"


bool Axis::is_greater_than(double threshold)
{
    // Return if the current value is greater than the threshold
    return m_value > threshold;

} // end of "is_greater_than"


bool Axis::is_less_than(double threshold)
{
    // Return if the current value is less than the threshold
    return m_value < threshold;

} // end of "is_less_than"


bool Axis::is_within(double lower_bound, double upper_bound)
{
    // Return lower < value < upper
    return (m_value > lower_bound) && (m_value < upper_bound);

} // end of "is_within"
