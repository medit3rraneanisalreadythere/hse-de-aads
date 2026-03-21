#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int s, n;
    std::cin >> s >> n;

    std::vector<int> dp(s + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        int x;
        std::cin >> x;

        for (int j = s; j >= x; --j)
        {
            if (dp[j - x]) dp[j] = 1;
        }
    }

    for (int i = s; i >= 0; --i)
    {
        if (dp[i])
        {
            std::cout << i;
            break;
        }
    }

    return 0;
}