#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    if (n == 1)
    {
        std::cout << 0;
        return 0;
    }

    int up = 1;
    int down = 1;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] > a[i - 1]) up = down + 1;
        else if (a[i] < a[i - 1]) down = up + 1;
    }

    int best = up;
    if (down > best) best = down;

    std::cout << n - best;

    return 0;
}