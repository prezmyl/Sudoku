#ifndef ELEMENT
#define ELEMENT
#include <vector>
#include <algorithm>

using namespace std;
class Element
{
    private:
        int value;
        int row;
        int col;
        vector<int> possibVal;



    public:
        Element(int value, int row, int col);
        int GetValue() const;
        int GetRow() const;
        int GetCol() const;
        void UpdateValue(int value);
        vector<int> GetPossibVal();
        void RemovePossibleVal(int value);

};

#endif