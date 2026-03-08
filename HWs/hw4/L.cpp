#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a < 0) 
    {
        a = -a; b = -b; c = -c; d = -d;
    }

    double l = -2000, r = 2000;

    while (r - l > 1e-9)
    {
        double m = (l + r) / 2.0, x = a * m * m * m + b * m * m + c * m + d;
        if (x > 0)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    std::cout << std::fixed
              << std::setprecision(6)
              << l;
}