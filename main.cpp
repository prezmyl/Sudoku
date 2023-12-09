#include "Controller.hpp"
#include "Solver.hpp"
#include "Board.hpp"

using namespace std;





int main()
{
    Controller ct("sudoku1.txt");
    ct.LoadData();
    ct.PrintGame();

    ct.InitAreas();

    return 0;
}