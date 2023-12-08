#include "Controller.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include "Element.hpp"


bool Controller::LoadData()
{
    string line;
    ifstream fin(fileName);
    if (!fin.is_open())
    {
        cerr << "file " << fileName << " cannot be opened" << endl;
        return false;
    }

    int row = 0;
    int col = 0;
    while (fin >> line)
    {
        
        vector<Element> vec;
        for (auto digitChar : line)
        {
            
            Element element(digitChar - '0', row, col++);
            vec.push_back(element);
            
        }
        
        this->board.push_back(vec);
        row++;
    }
    
    


}

bool Controller::InitGame()
{
    return false;
}


bool Controller::SaveGame()
{
    return false;
}