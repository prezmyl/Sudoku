#include "Controller.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include "Element.hpp"
#include "Area.hpp"
#include "Row.hpp"
#include "Col.hpp"
#include "Box.hpp"


Controller::Controller(string fileName)
{
    this->fileName = fileName;
}

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
    
    
    return true;

}

void Controller::InitAreas()
{
     
    for (size_t i = 0; i < board.size(); i++)
    {
        this->areas.push_back(new Row(i));
    }
    
    for (size_t i = 0; i < board.size(); i++)
    {
        this->areas.push_back(new Col(i));
    }

    
    for (size_t i = 0; i < board.size(); i+=3)
    {
        for (size_t j = 0; j < board.size(); j+=3)
        {
            
            this->areas.push_back(new Box(i,j));
        }
    }



    
}

bool Controller::SolveGame()
{
    return false;
}

bool Controller::PrintGame()
{
    for (auto &&vec : board)
    {
        cout << "|";
        for (auto &&element : vec)
        {
            cout  << element.GetValue() << "|";
        }
        cout << endl;
    }
    
    return false;
}