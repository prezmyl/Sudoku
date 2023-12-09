#include <vector>
#include "Element.hpp"
#include "Area.hpp"


class Box : public Area
{
    private:
      //  vector<vector<element>>& box;
      int startRow;
      int startCol;

    public:
        Box(int startRow, int startCol);
        ~Box();
        bool Update(vector<vector<Element>>& board, Element& aElem);
};

