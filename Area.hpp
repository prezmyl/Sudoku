#ifndef AREA
#define AREA
#include <vector>
#include "Element.hpp"

using namespace std;

class Area
{
    public:
        virtual bool Update(vector<vector<Element>>& area, Element& aElem) = 0;
    
};

#endif