#include "Area.hpp"

class Col : public Area
{
    private:
        int col;

    public:
        Col(int col);
        ~Col();
        bool Update(vector<vector<Element>>& area, Element& aElem);
};