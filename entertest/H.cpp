#include <iostream>
#include <vector>

const long long M = (1 << 30);

int main(int argc, char** argv)
{
    long long n = 0, k = 0, a = 0, x = 0, y = 0;
    std::cin >> n >> k >> a >> x >> y;

    std::vector<long long> v(n);
    v[0] = (((x * a) % M) + y) % M;

    for (int i = 1; i < n; ++i)
    {
        v[i] = (((x * v[i - 1]) % M) + y) % M;
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < k; ++i)
    {
        std::cout << v[i] << " ";
    }
}