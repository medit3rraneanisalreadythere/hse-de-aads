#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    if (n)
    {
        std::vector<int> v(n);

        int mx = -1e9, mx_i = 0;
        for (int i = 0; i < n; ++i)
        {
            std::cin >> v[i];
            if (mx < v[i])
            {
                mx = v[i];
                mx_i = i;
            }
        }

        std::swap(v[n - 1], v[mx_i]);

        for (int i = 0; i < n; ++i)
        {
            std::cout << v[i] << " ";
        }
    }   
}