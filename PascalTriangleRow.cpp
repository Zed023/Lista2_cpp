#include "PascalTriangleRowBuild.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

PascalTriangleRow::PascalTriangleRow(int n)
{
    pascalArrayRow = PascalTriangleRowLib::genRow(n);
}

vector<int> PascalTriangleRow::getPascalTriangleRow()
{
    return pascalArrayRow;
}

int PascalTriangleRow::factor(int m)
{
    int pascalArrayRowSize = sizeof(this -> getPascalTriangleRow()) / sizeof(this -> getPascalTriangleRow()[0]);
    if(m >= 0 && m <= pascalArrayRowSize)
    {
        return this -> pascalArrayRow[unsigned(m)];
    }
    return -1;
}


