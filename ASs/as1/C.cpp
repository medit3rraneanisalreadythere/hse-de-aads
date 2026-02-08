#include <iostream>

int main(int argc, char** argv) 
{
    short n = 0;
    std::cin >> n;

    for (short i = 0; i < n; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            std::cout << abs(i - j);
            
            if (j != n - 1)
            {
                std::cout << " ";
            }
        }
        
        std::cout << "\n";
    }

    return 0;
}