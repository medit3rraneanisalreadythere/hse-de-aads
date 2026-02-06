#include <iostream>

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (i + j == 0)
            {
                std::cout << "\t";
                continue;
            }

            if (i == 0)
            {
                std::cout << j;

                if (j != n)
                {
                    std::cout << "\t";
                }

                continue;
            }

            if (j == 0)
            {
                std::cout << i << "\t";
                continue;
            }

            std::cout << i + j;
        
            if (j != n)
            {
                std::cout << "\t";
            }
        }

        if (i != n)
        {
            std::cout << "\n";
        }
    }

    return 0;
}