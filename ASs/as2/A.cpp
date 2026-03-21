#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; ++i) 
        std::cin >> v[i];

    std::vector<int> dp(n + 1, 1);
    int mx = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j)
            if (v[i] % v[j] == 0) dp[i] = std::max(dp[i], dp[j] + 1);
        mx = std::max(mx, dp[i]);
    }

    std::cout << mx;

    return 0;
}