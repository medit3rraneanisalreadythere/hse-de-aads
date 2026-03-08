#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n, inv = 0;
    std::cin >> n;

    if (n)
    {
        std::vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            std::cin >> v[i];
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (v[i] > v[j]) 
                {
                    inv++;
                }
            }
        }
    }

    std::cout << inv;
}