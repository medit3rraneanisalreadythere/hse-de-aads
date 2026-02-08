#define LL long long
#include <iostream>

int main(int argc, char** argv)
{
    LL n = 0, m = 0;
    std::cin >> n >> m;

    LL best_num = 0, best_x = 0, best_sum = 0;
    for (LL i = 0; i < n; ++i)
    {
        LL sum = 0, mx = 0;
        
        for (LL j = 0; j < m; ++j)
        {
            LL x = 0;
            std::cin >> x;

            mx = std::max(x, mx);
            sum += x;
        }

        if (mx > best_x)
        {
            best_num = i;
            best_x = mx;
            best_sum = sum;
        }
        else if (mx == best_x && sum > best_sum)
        {
            best_num = i;
            best_x = mx;
            best_sum = sum;
        }
    }

    std::cout << best_num;

    return 0;
}