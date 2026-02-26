#include <iostream>

double Power(double a, long n) 
{
    if (n == 0) 
    {
        return 1.0;
    }

    if (n < 0) 
    {
        return 1.0 / Power(a, -n);
    }

    if (n % 2 == 0) 
    {
        double half = Power(a, n / 2);
        return half * half;
    } 
    else 
    {
        return a * Power(a, n - 1);
    }
}

int main(int argc, char** argv)
{
    double a = 0.0;
    long n = 0;
    std::cin >> a >> n;

    std::cout << Power(a, n);
}