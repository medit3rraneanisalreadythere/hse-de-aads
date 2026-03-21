#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n; std::cin >> n;

    std::vector<long long> a(n + 1, 1);
    for (int i = 2; i <= n; ++i)
    {
        if (i % 2) a[i] = a[(i - 1) / 2] - a[(i - 1) / 2 - 1];
        else a[i] = a[i / 2] + a[i / 2 - 1];
    }

    std::cout << a[n];

    return 0;
}