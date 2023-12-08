#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include "Element.hpp"

using namespace std;


class Controller
{
    private:
        vector<vector<Element>> board;
        string fileName;

    public:
        Controller(string filaName);
        bool LoadData();
        bool InitGame();
        bool SolveGame();
        bool PrintGame();
};
