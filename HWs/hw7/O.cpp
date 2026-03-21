#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, m;
    std::cin >> n >> m;

    std::vector<long long> startA(m + 1);
    for (int i = 1; i <= m; ++i)
    {
        std::cin >> startA[i];
    }

    long long xa, ya, za;
    std::cin >> xa >> ya >> za;

    std::vector<long long> startB(m + 1);
    for (int i = 1; i <= m; ++i)
    {
        std::cin >> startB[i];
    }

    long long xb, yb, zb;
    std::cin >> xb >> yb >> zb;

    long long bestMinus = -(long long)4e18;
    long long bestPlus = -(long long)4e18;
    long long ans = -(long long)4e18;

    long long lastA = 0;
    long long lastB = 0;

    for (int i = 1; i <= n; ++i)
    {
        long long a, b;

        if (i <= m)
        {
            a = startA[i];
            b = startB[i];
        }
        else
        {
            a = 1 + (lastA * xa + ya) % za;
            b = 1 + (lastB * xb + yb) % zb;
        }

        long long cur = -b;

        long long take = 0;
        if (bestMinus + a > take) take = bestMinus + a;
        if (bestPlus - a > take) take = bestPlus - a;

        cur += take;

        if (cur > ans) ans = cur;
        if (cur - a > bestMinus) bestMinus = cur - a;
        if (cur + a > bestPlus) bestPlus = cur + a;

        lastA = a;
        lastB = b;
    }

    std::cout << ans;

    return 0;
}