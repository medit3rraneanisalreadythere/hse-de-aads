#include <iostream>

int main(int argc, char** argv)
{
    int n, r; std::cin >> n >> r;
    int d[300005];

    for (int i = 0; i < n; ++i)
        std::cin >> d[i];

    long long ans = 0;
    int j = 0;

    for (int i = 0; i < n; ++i) {
        if (j <= i) j = i + 1;
        while (j < n && d[j] - d[i] <= r)
            ++j;
        ans += (n - j);
    }

    std::cout << ans;

    return 0;
}