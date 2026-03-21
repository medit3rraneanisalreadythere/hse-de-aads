#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n + 1);
    std::vector<int> b(m + 1);

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
    }

    for (int j = 1; j <= m; ++j)
    {
        std::cin >> b[j];
    }

    std::vector<int> dp(m + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        int best = 0;

        for (int j = 1; j <= m; ++j)
        {
            if (a[i] == b[j])
            {
                if (best + 1 > dp[j]) dp[j] = best + 1;
            }
            else if (a[i] > b[j])
            {
                if (dp[j] > best) best = dp[j];
            }
        }
    }

    int ans = 0;
    for (int j = 1; j <= m; ++j)
    {
        if (dp[j] > ans) ans = dp[j];
    }

    std::cout << ans;

    return 0;
}