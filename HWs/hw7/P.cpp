#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int getId(char c)
{
    if (c == 'N') return 0;
    if (c == 'S') return 1;
    if (c == 'W') return 2;
    if (c == 'E') return 3;
    if (c == 'U') return 4;
    return 5;
}

int main(int argc, char** argv)
{
    std::vector<std::string> rule(6);
    for (int i = 0; i < 6; ++i)
    {
        std::cin >> rule[i];
    }

    char start;
    int m;
    std::cin >> start >> m;

    std::vector<std::vector<long long>> dp(6, std::vector<long long>(m + 1, 0));

    for (int i = 0; i < 6; ++i)
    {
        dp[i][1] = 1;
    }

    for (int len = 2; len <= m; ++len)
    {
        for (int i = 0; i < 6; ++i)
        {
            dp[i][len] = 1;

            for (int j = 0; j < (int)rule[i].size(); ++j)
            {
                int to = getId(rule[i][j]);
                dp[i][len] += dp[to][len - 1];
            }
        }
    }

    std::cout << dp[getId(start)][m];

    return 0;
}