#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> st(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> st[i];
    }

    int l = 0, r = st[n - 1] - st[0], ret = 0;

    while (l <= r) 
    {
        int m = (l + r) / 2, c = 1, last = st[0];

        for (int i = 1; i < n; ++i) 
        {
            if (st[i] - last >= m) {
                c++;
                last = st[i];
            }
        }

        if (c >= k) 
        {
            ret = m;
            l = m + 1;
        } 
        else 
        {
            r = m - 1;
        }
    }

    std::cout << ret;
}