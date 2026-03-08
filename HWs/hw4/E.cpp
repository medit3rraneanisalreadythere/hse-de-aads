#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> v1(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v1[i];
    }

    int m;
    std::cin >> m;

    std::vector<int> v2(m);

    for (int i = 0; i < m; ++i)
    {
        std::cin >> v2[i];
    }

    std::vector<int> v(m + n);
    if (n == 0)
    {
        v = v2;
    }
    else if (m == 0)
    {
        v = v1;
    }
    else
    {
        int i = 0, j = 0;
        for (int k = 0; k < m + n; ++k)
        {
            if (i >= n)
            {
                v[k] = v2[j];
                ++j;
            }
            else if (j >= m)
            {
                v[k] = v1[i];
                ++i;
            }
            else if (v1[i] < v2[j])
            {
                v[k] = v1[i];
                i++;
            }
            else
            {
                v[k] = v2[j];
                j++;
            }
        }
    }

    for (int i = 0; i < m + n; ++i)
    {
        std::cout << v[i] << " ";
    }
}