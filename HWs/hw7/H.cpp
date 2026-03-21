#include <iostream>
#include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> ans(n);

    for (int t = 0; t < n; ++t)
    {
        std::string s, p;
        std::cin >> s >> p;

        int m = (int)s.size();
        int k = (int)p.size();

        std::vector<int> prev(k + 1);
        std::vector<int> cur(k + 1);

        for (int j = 0; j <= k; ++j)
        {
            prev[j] = j;
        }

        for (int i = 1; i <= m; ++i)
        {
            cur[0] = i;

            for (int j = 1; j <= k; ++j)
            {
                cur[j] = prev[j] + 1;
                if (cur[j - 1] + 1 < cur[j]) cur[j] = cur[j - 1] + 1;

                int cost = 0;
                if (s[i - 1] != p[j - 1]) cost = 1;

                if (prev[j - 1] + cost < cur[j]) cur[j] = prev[j - 1] + cost;
            }

            prev.swap(cur);
        }

        ans[t] = prev[k];
    }

    for (int i = 0; i < n; ++i)
    {
        if (i) std::cout << " ";
        std::cout << ans[i];
    }

    return 0;
}