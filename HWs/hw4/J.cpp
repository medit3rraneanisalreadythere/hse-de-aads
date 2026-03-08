#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv)
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for (int i = 0; i < k; ++i)
    {
        int x;
        std::cin >> x;

        if (std::binary_search(v.begin(), v.end(), x))
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
}