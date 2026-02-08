#include <iostream>

int main(int argc, char** argv)
{
    short n = 0;
    std::cin >> n;

    short Cayley[100][100];
    for (short i = 0; i < n; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            short x = 0;
            std::cin >> x;
            Cayley[i][j] = x;
        }
    }

    for (short i = 0; i < n; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            for (short k = 0; k < n; ++k)
            {
                if (Cayley[Cayley[i][j]][k] != Cayley[i][Cayley[j][k]])
                {
                    std::cout << "NO";
                    return 0;
                }
            }
        }
    }

    std::cout << "YES";

    return 0;
}