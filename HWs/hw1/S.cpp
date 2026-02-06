#include <iostream>

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;

    int mx = -1e9, mn = 1e9;
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;

        sum += x;
        mx = std::max(x, mx);
        mn = std::min(x, mn);
    }

    std::cout << sum << " " << mn << " " << mx;

    return 0;
}