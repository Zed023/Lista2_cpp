#pragma once
#include <string>
#include <vector>


class PascalTriangleRow
{
    private:
        std::vector<int> pascalArrayRow;
    
    public:
        PascalTriangleRow(int n);
        std::vector<int> getPascalTriangleRow();
        int factor(int m);
};

class PascalTriangleRowLib
{
    public:
        static std::vector<int> genRow(int n)
        {
            std::vector<int> help(1);
            help[0] = 0;
            if(n >= 0)
            {
                unsigned int n1 = unsigned(n);
                std::vector<int> arr(n1 + 1);
                arr[0] = 1;
                for (unsigned int i = 1; i <= n1; i++)
                {
                    if(i <= (n1/2))
                    {
                        arr[i] = int((unsigned(arr[i - 1]) * ((n1 - i) + 1)) / i);
                    }
                    else
                    {
                        arr[i] = arr[n1 - i];
                    }
                }
                return arr;
            }
            return help;
        }
};

