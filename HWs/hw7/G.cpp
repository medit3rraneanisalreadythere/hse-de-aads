#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    const int MOD = 1000000007;

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
    }

    std::vector<int> dp(m + 1, 0);
    std::vector<int> ndp(m + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            ndp[j] = 0;
        }

        for (int r = 0; r < i; ++r)
        {
            long long sum = 0;

            for (int j = r, k = 0; j <= m; j += i, ++k)
            {
                sum += dp[j];

                if (k - a[i] - 1 >= 0)
                {
                    sum -= dp[j - (a[i] + 1) * i];
                }

                sum %= MOD;
                if (sum < 0) sum += MOD;

                ndp[j] = (int)sum;
            }
        }

        dp.swap(ndp);
    }

    std::cout << dp[m];

    return 0;
}