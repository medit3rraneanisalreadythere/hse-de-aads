#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for (int i = 0; i + k <= n; ++i)
    {
        int mn = v[i];
        for (int j = i; j < i + k; ++j)
        {
            mn = std::min(mn, v[j]);
        }

        std::cout << mn << "\n";
    }

    return 0;
}