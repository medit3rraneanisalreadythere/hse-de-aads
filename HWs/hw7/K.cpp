#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, a1, k, b, m;
    std::cin >> n >> a1 >> k >> b >> m;

    std::vector<int> d;
    d.reserve(n);

    int x = a1;
    for (int i = 0; i < n; ++i)
    {
        int pos = (int)(std::lower_bound(d.begin(), d.end(), x) - d.begin());

        if (pos == (int)d.size()) d.push_back(x);
        else d[pos] = x;

        x = (int)(((long long)k * x + b) % m);
    }

    std::cout << d.size();

    return 0;
}