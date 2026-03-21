#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int l, n;
    std::cin >> l >> n;

    std::vector<int> a(n + 2);
    a[0] = 0;
    a[n + 1] = l;

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
    }

    std::vector<std::vector<long long>> dp(n + 2, std::vector<long long>(n + 2, 0));

    for (int len = 2; len <= n + 1; ++len)
    {
        for (int left = 0; left + len <= n + 1; ++left)
        {
            int right = left + len;
            dp[left][right] = (long long)4e18;

            for (int mid = left + 1; mid < right; ++mid)
            {
                long long cur = dp[left][mid] + dp[mid][right] + (a[right] - a[left]);
                if (cur < dp[left][right]) dp[left][right] = cur;
            }
        }
    }

    std::cout << dp[0][n + 1];

    return 0;
}