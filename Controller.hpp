#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include "Element.hpp"
#include "Area.hpp"

using namespace std;


class Controller
{
    private:
        vector<vector<Element>> board;
        vector<Area*> areas;
        bool stateChanged;
        string fileName;

    public:
        Controller(string filaName);
        bool LoadData();
        void InitAreas();
        bool SolveGame();
        bool PrintGame();
};
