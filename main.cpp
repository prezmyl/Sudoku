#include "Controller.hpp"
#include "Solver.hpp"
#include "Board.hpp"

using namespace std;





int main()
{
    Controller ct("sudoku1.txt");
    ct.LoadData();
    ct.PrintGame();

    

    return 0;
}