#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>
// #include <cmath>
#include <iomanip>

struct Interval
{
    double b, e, w;
};

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<Interval> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        std::cin >> a[i].b >> a[i].e >> a[i].w;
    }

    std::sort(a.begin() + 1, a.end(), [](const Interval& x, const Interval& y)
    {
        if (x.e != y.e) return x.e < y.e;
        return x.b < y.b;
    });

    std::vector<double> ends(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        ends[i] = a[i].e;
    }

    std::vector<double> dp(n + 1, 0.0);

    for (int i = 1; i <= n; ++i)
    {
        int j = (int)(std::upper_bound(ends.begin() + 1, ends.begin() + i, a[i].b) - ends.begin()) - 1;
        double take = dp[j] + a[i].w;

        dp[i] = dp[i - 1];
        if (take > dp[i]) dp[i] = take;
    }

    std::cout << std::fixed << std::setprecision(4) << dp[n];

    return 0;
}