#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<long long> a(n + 1);
    std::vector<long long> b(n);

    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i];
    }

    for (int i = 1; i < n; ++i)
    {
        std::cin >> b[i];
    }

    const long long INF = (long long)4e18;

    long long dp0 = 0;
    long long dp1 = a[1];

    for (int i = 2; i <= n; ++i)
    {
        long long ndp0 = INF;
        long long ndp1 = INF;

        ndp0 = std::min(ndp0, dp0 + b[i - 1]);
        ndp1 = std::min(ndp1, dp0 + b[i - 1] + a[i]);

        ndp1 = std::min(ndp1, dp1 + b[i - 1]);
        ndp0 = std::min(ndp0, dp1);
        ndp1 = std::min(ndp1, dp1 + a[i]);

        dp0 = ndp0;
        dp1 = ndp1;
    }

    std::cout << dp1;

    return 0;
}