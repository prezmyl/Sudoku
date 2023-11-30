#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>

using namespace std;


class Board
{
    private:
        vector<vector<int>> &board;
        int size;

    public:
        Board(int size, vector<vector<int>> &board);
        void InitBoard();
        void PrintBoard();

};