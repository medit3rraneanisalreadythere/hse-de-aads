#include <iostream>

bool mines[100][100] = {false};
bool opened[100][100] = {false};

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
    short n = 0, k = 0;
    std::cin >> n >> k;
    
    for (short i = 0; i < k; ++i)
    {
        short x = 0, y = 0;
        std::cin >> x >> y;
        mines[x - 1][y - 1] = true;
    }

    short m = 0;
    std::cin >> m;

    short stack[10000];
    short top = -1;

    for (short i = 0; i < m; ++i)
    {
        short x = 0, y = 0;
        std::cin >> x >> y;
        x--; y--;

        if (opened[x][y]) 
        {}
        else if (mines[x][y])
        {
            std::cout << "LOOSE" << std::endl;
            return 0;
        }
        else
        {
            opened[x][y] = true;

            if (get_near(x, y, n) == 0)
            {
                short stack[10000];
                short top = -1;

                for (short dx = -1; dx <= 1; dx++)
                {
                    for (short dy = -1; dy <= 1; dy++)
                    {
                        if (dx == 0 && dy == 0) continue;
                        short nx = x + dx, ny = y + dy;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !opened[nx][ny] && !mines[nx][ny])
                        {
                            stack[++top] = nx * n + ny;
                        }
                    }
                }

                while (top >= 0)
                {
                    short idx = stack[top--];
                    short cx = idx / n;
                    short cy = idx % n;

                    if (opened[cx][cy]) {
                        continue;
                    }
                    
                    opened[cx][cy] = true;

                    if (get_near(cx, cy, n) == 0)
                    {
                        for (short dx = -1; dx <= 1; dx++)
                        {
                            for (short dy = -1; dy <= 1; dy++)
                            {
                                if (dx == 0 && dy == 0) {
                                    continue;
                                }

                                short nx = cx + dx, ny = cy + dy;
                                
                                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !opened[nx][ny] && !mines[nx][ny])
                                {
                                    stack[++top] = nx * n + ny;
                                }
                            }
                        }
                    }
                }
            }
        }

        if ((i + 1) % 5 == 0)
        {
            for (short c = 0; c < n; ++c)
            {
                for (short r = 0; r < n; ++r)
                {
                    if (opened[r][c])
                    {
                        std::cout << get_near(r, c, n) << " ";
                    }
                    else
                    {
                        std::cout << "X ";
                    }
                }
                std::cout << "\n";
            }
        }
    }

    for (short j = 0; j < n; ++j)
    {
        for (short i = 0; i < n; ++i)
        {
            if (opened[i][j])
            {
                std::cout << get_near(i, j, n) << " ";
            }
            else
            {
                std::cout << "X ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}