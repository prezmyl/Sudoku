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
        vector<vector<Element>> board;
        string fileName;

    public:
        bool LoadData();
        bool InitGame();
        bool SaveGame();
};
