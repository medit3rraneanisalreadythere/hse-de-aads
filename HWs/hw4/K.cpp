#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    std::sort(v.begin(), v.end());

    int k;
    std::cin >> k;

    for (int i = 0; i < k; ++i)
    {
        int l, r;
        std::cin >> l >> r;

        std::cout << std::distance(std::lower_bound(v.begin(), v.end(), l), 
                                   std::upper_bound(v.begin(), v.end(), r)) << " ";
    }
}