#include "Element.hpp"

Element::Element(int value, int row, int col)
{
    this->value = value;
    this->row = row;
    this->col = col;
    
    if (value == 0)
    {
        for (size_t i = 1; i <= 9; i++)
        {
            this->possibVal.push_back(i);
        }
        
    }
    
}
        
int Element::GetValue() const
{
    return this->value;
}


int Element::GetRow() const
{
    return this->row;
}
        
int Element::GetCol() const
{
    return this->col;
}

void Element::UpdateValue(int value)
{
    this->value = value;
    possibVal.clear();
}

vector<int> Element::GetPossibVal()
{

    return this->possibVal;
}

void Element::RemovePossibleVal(int value)
{
    auto it = find(possibVal.begin(), possibVal.end(), value);
    if (it != possibVal.end())
    {
        possibVal.erase(it);
    }
    
}
