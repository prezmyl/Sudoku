#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>

using namespace std;


class Controller
{
    private:
        vector<vector<int>> &board;

    public:
        bool LoadData();
        bool InitGame();
        bool SaveGame();
};
