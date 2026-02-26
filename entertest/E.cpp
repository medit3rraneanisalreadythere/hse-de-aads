#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n = 0, T = 0;
    std::cin >> n >> T;

    std::vector<int> Ts(n), Vs(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> Ts[i] >> Vs[i];
    }

    std::vector< std::pair<long long, int> > dp(T + 1, {0, 0});
    for (int i = 0; i < n; ++i)
    {
        for (int j = T; j >= Ts[i]; --j)
        {
            dp[j] = std::max(dp[j], 
                            { dp[j - Ts[i]].first + Vs[i], 
                              dp[j - Ts[i]].second - 1 });
        }
    }

    auto ret = *max_element(dp.begin(), dp.end());
    std::cout << ret.first << " " << -ret.second;

    return 0;
}