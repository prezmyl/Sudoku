


#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include "Element.hpp"

using namespace std;


class Board
{
    private:
        //vector<vector<Element>> &board;
        int size;

    public:
        Board(int size, vector<vector<Element>> &board);
        void InitBoard();
        void PrintBoard();

};

