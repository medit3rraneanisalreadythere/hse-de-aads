#include <iostream>

bool mines[100][100] = {false};


/*
(x - 1, y - 1) (x - 1, y) (x - 1, y + 1)
(x, y - 1)     (x, y)     (x, y + 1)
(x + 1, y - 1) (x + 1, y) (x + 1, y + 1)
*/


short get_near(short x, short y, short n)
{
    short answ = 0;

    if (x > 0)
    {
        answ += mines[x - 1][y];
        if (y > 0)
        {
            answ += mines[x - 1][y - 1];
        }
        if (y < n - 1)
        {
            answ += mines[x - 1][y + 1];
        }
    }

    if (y > 0)
    {
        answ += mines[x][y - 1];
    }
    if (y < n - 1)
    {
        answ += mines[x][y + 1];
    }

    if (x < n - 1)
    {
        answ += mines[x + 1][y];
        if (y > 0)
        {
            answ += mines[x + 1][y - 1];
        }
        if (y < n - 1)
        {
            answ += mines[x + 1][y + 1];
        }
    }

    return answ;
}

int main(int argc, char** argv)
{
    short m = 0, n = 0, k = 0;
    std::cin >> m >> n >> k;
    
    for (short i = 0; i < k; ++i)
    {
        int x = 0, y = 0;
        std::cin >> x >> y;
        mines[x - 1][y - 1] = true;
    }


    for (short i = 0; i < m; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            if (mines[i][j])
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << get_near(i, j, n) << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}