#include "Element.hpp"

Element::Element(int value, int row, int col)
{
    this->value = value;
    this->row = row;
    this->col = col;
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
        