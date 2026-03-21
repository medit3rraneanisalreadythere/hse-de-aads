#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
    }

    int m;
    std::cin >> m;

    std::vector<int> b(m + 1);
    for (int i = 1; i <= m; ++i)
    {
        std::cin >> b[i];
    }

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            if (dp[i][j - 1] > dp[i][j]) dp[i][j] = dp[i][j - 1];
            if (a[i] == b[j] && dp[i - 1][j - 1] + 1 > dp[i][j]) dp[i][j] = dp[i - 1][j - 1] + 1;
        }
    }

    std::cout << dp[n][m];

    return 0;
}