#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    int w;
    std::cin >> w;

    std::vector<int> p(n + 1);
    std::vector<long long> c(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> p[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> c[i];
    }

    std::vector<std::vector<long long>> dp(n + 1, std::vector<long long>(w + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= w; ++j)
        {
            dp[i][j] = dp[i - 1][j];

            if (j >= p[i])
            {
                long long candidate = dp[i - 1][j - p[i]] + c[i];
                if (candidate > dp[i][j]) dp[i][j] = candidate;
            }
        }
    }

    int bestWeight = 0;
    for (int j = 0; j <= w; ++j)
    {
        if (dp[n][j] > dp[n][bestWeight]) bestWeight = j;
    }

    std::vector<int> ansW;
    std::vector<long long> ansC;

    int curW = bestWeight;
    for (int i = n; i >= 1; --i)
    {
        if (curW >= p[i] && dp[i][curW] == dp[i - 1][curW - p[i]] + c[i])
        {
            ansW.push_back(p[i]);
            ansC.push_back(c[i]);
            curW -= p[i];
        }
    }

    std::cout << dp[n][bestWeight] << "\n";
    std::cout << bestWeight << "\n";
    std::cout << ansW.size() << "\n";

    for (int i = 0; i < (int)ansW.size(); ++i)
    {
        std::cout << ansW[i];
        if (i + 1 < (int)ansW.size()) std::cout << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < (int)ansC.size(); ++i)
    {
        std::cout << ansC[i];
        if (i + 1 < (int)ansC.size()) std::cout << " ";
    }

    return 0;
}