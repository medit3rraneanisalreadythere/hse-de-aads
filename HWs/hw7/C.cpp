#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> weight(n + 1);
    std::vector<int> cost(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> weight[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> cost[i];
    }

    std::vector<int> dp(m + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = m; j >= weight[i]; --j)
        {
            if (dp[j - weight[i]] + cost[i] > dp[j]) dp[j] = dp[j - weight[i]] + cost[i];
        }
    }

    std::cout << dp[m];

    return 0;
}