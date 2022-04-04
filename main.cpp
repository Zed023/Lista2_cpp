#include "PascalTriangleRowBuild.hpp"
#include <exception>
#include <iostream>
#include <ostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int k;

    try
    {
        n = std::stoi(argv[1]);
        PascalTriangleRow *arr = new PascalTriangleRow(n);
        if(arr -> getPascalTriangleRow()[0] == 0)
        {
            cout << argv[1] << " - Nieprawidłowy zakres" << endl; 
        } 
        else 
        {
            for(int i = 2; i < argc; i++)
            {
                try 
                {
                    k = std::stoi(argv[i]);
                    int w = arr -> factor(k);
                    if(w == -1)
                    {
                        cout << argv[i] << " - liczba spoza zakresu" << endl;
                    }
                    else
                    {
                        cout << argv[i] << " - " << w << endl;
                    }

                } 
                catch (exception) 
                {
                    cout << argv[i] << " - Nieprawidłowy zakres" << endl; 
                }
            }
        }
    }
    catch (exception)
    {
        cout << argv[1] << " - Nieprawidłowy zakres" << endl; 
    }
    return 0;
}

