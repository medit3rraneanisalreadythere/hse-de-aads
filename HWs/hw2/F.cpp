#include <iostream>

int main(int argc, char** argv)
{
    short n = 0;
    std::cin >> n;

    // char arr[100][100];
    for (short i = 0; i < n; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            if (i + j == n - 1)
            {
                // arr[i][j] = '1';
                std::cout << 1 << " ";
            }
            else if (i + j < n - 1)
            {
                // arr[i][j] = '0';
                std::cout << 0 << " ";
            }
            else
            {
                // arr[i][j] = '2';
                std::cout << 2 << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}