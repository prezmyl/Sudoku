#include "Element.hpp"

Element::Element(int value)
{
    this->value = value;
}
        
int Element::GetValue()
{
    return this->value;
}


int Element::GetRow()
{
    return this->row;
}
        
int Element::GetCol()
{
    return this->col;
}
        