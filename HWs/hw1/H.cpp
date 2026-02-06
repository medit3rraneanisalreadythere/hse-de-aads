#define US unsigned short
#include <iostream>

int main(int argc, char** argv)
{
    US n = 0, k = 0, m = 0, mN = 0;
    std::cin >> n >> k >> m;

    if (n < k || k < m)
    {
        std::cout << 0;
        return 0;
    }

    while (n >= k)
    {
        US kN = n / k;
        n %= k;
        mN += ((k / m) * kN);
        n += ((k % m) * kN);
    }

    std::cout << mN;

    return 0;
}