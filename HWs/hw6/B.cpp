#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n; std::cin >> n;

    std::vector<int> dp(n + 1, 1);
    for (int i = n - 1; i >= 0; --i)
    {
        dp[i] = dp[i + 1];
        if (i + 2 <= n) dp[i] += dp[i + 2];
        if (i + 3 <= n) dp[i] += dp[i + 3];
    }

    std::cout << dp[0];

    return 0;
}