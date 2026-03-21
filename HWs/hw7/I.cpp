#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    std::string s, t;
    std::cin >> s >> t;

    int n = (int)s.size();
    int m = (int)t.size();

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            dp[i][j] = dp[i - 1][j];
            if (dp[i][j - 1] > dp[i][j]) dp[i][j] = dp[i][j - 1];
            if (s[i - 1] == t[j - 1] && dp[i - 1][j - 1] + 1 > dp[i][j]) dp[i][j] = dp[i - 1][j - 1] + 1;
        }
    }

    std::vector<int> a;
    std::vector<int> b;

    int i = n;
    int j = m;

    while (i > 0 && j > 0)
    {
        if (s[i - 1] == t[j - 1] && dp[i][j] == dp[i - 1][j - 1] + 1)
        {
            a.push_back(i);
            b.push_back(j);
            --i;
            --j;
        }
        else if (dp[i - 1][j] == dp[i][j])
        {
            --i;
        }
        else
        {
            --j;
        }
    }

    std::cout << a.size() << "\n";

    for (int k = (int)a.size() - 1; k >= 0; --k)
    {
        std::cout << a[k];
        if (k) std::cout << " ";
    }
    std::cout << "\n";

    for (int k = (int)b.size() - 1; k >= 0; --k)
    {
        std::cout << b[k];
        if (k) std::cout << " ";
    }

    return 0;
}