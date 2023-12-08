#include <vector>
#include "Element.hpp"

using namespace std;

class Area
{
    public:
        virtual bool Update(vector<vector<Element>>& region) = 0;
    
};