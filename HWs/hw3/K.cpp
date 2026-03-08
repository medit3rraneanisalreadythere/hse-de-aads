#include <iostream>

long long ext_gcd(long long a, long long b, long long &x, long long &y) 
{
    if (b == 0) 
    {
        x = 1;
        y = 0;
        return a;
    }

    long long x1, y1;
    long long g = ext_gcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return g;
}

int main(int argc, char** argv)
{
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) 
    {
        long long a, b, c;
        std::cin >> a >> b >> c;

        long long x, y;
        long long g = ext_gcd(a, b, x, y);

        if (c % g != 0) 
        {
            std::cout << "0 0\n";
            continue;
        }

        x *= c / g;
        y *= c / g;

        long long k = b / g;
        long long step = a / g;
        long long t = -x / k;

        x += t * k;
        y -= t * step;

        while (x < 0) 
        {
            x += k;
            y -= step;
        }

        while (x - k >= 0) 
        {
            x -= k;
            y += step;
        }

        std::cout << x << " " << y << "\n";
    }
}