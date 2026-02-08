#include <iostream>
#include <vector>

int main(int argc, char** argv) 
{
    short n = 0, m = 0;
    std::cin >> n >> m;

    std::vector<short> max_row(n, 0);
    for (short i = 0; i < n; ++i)
    {
        short l = 0;
        for (short j = 0; j < m; ++j)
        {
            short x = 0;
            std::cin >> x;
            
            if (x)
            {
                max_row[i] = std::max(max_row[i], l);
                l = 0;
            }
            else
            {
                l++;
            }
        }
        max_row[i] = std::max(max_row[i], l);
    }

    short k = 0;
    std::cin >> k;

    for (short i = 0; i < n; ++i)
    {
        if (max_row[i] >= k)
        {
            std::cout << i + 1;
            return 0;
        }
    }

    std::cout << 0;

    return 0;
}