#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
    long long n = 0, sum = 0, mn = 0, mx = 0;
    std::cin >> n;

    for (long long i = 0; i < n; ++i)
    {
        long long x = 0;
        std::cin >> x;

        if (i == 0)
        {
            mn = x;
            mx = x;
        }

        sum += x;
        mn = std::min(mn, x);
        mx = std::max(mx, x);
    }

    std::cout << sum << " ";
    std::cout << std::fixed
              << std::setprecision(4)
              << (sum / (long double)n);
    std::cout << "\n" << mn << " " << mx;
}