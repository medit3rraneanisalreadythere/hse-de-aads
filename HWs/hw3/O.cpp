#include <iostream>
#include <vector>
#include <string>

int main(int argc, char** argv) 
{
    int n = 0;
    std::cin >> n;

    std::vector< std::vector<std::string> > vars(11);
    vars[1].push_back("0");
    vars[1].push_back("1");

    for (int i = 2; i <= 10; ++i)
    {
        for (int j = 0; j < (int)vars[i - 1].size(); ++j)
        {
            vars[i].push_back(vars[i - 1][j] + "0");
            vars[i].push_back(vars[i - 1][j] + "1");
        }
    }

    for (int i = 0; i < (int)vars[n].size(); ++i)
    {
        std::cout << vars[n][i] << "\n";
    }

    return 0;
}