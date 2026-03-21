#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, m; std::cin >> n >> m;
    
    std::vector< std::vector<int> > dp(n + 1, 
                                       std::vector<int>(m + 1, 0));
    
    dp[1][1] = 1;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (i == 1 && j == 1) continue;
            if (i - 2 >= 1 && j - 1 >= 1)
                dp[i][j] += dp[i - 2][j - 1];
            if (i - 1 >= 1 && j - 2 >= 1)
                dp[i][j] += dp[i - 1][j - 2];
        }

    std::cout << dp[n][m];

    return 0;
}