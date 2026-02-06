#include <iostream>

// 3 x 1 = 3

int main(int argc, char** argv)
{
    int m1 = 0, m2 = 0, n1 = 0, n2 = 0;
    std::cin >> m1 >> m2 >> n1 >> n2;

    for (int i = m1; i <= m2; ++i)
    {
        for (int j = n1; j <= n2; ++j)
        {
            std::cout << i << " x " << j << " = " << i * j << "\n";
        }
        
        if (i != m2)
        {
            std::cout << "\n";
        }
    }

    return 0;
}