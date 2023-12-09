#include "Area.hpp"

class Row : public Area
{
    private:
        int row;

    public:
        Row(int row);
        ~Row();
        bool Update(vector<vector<Element>>& area, Element& aElem);
};