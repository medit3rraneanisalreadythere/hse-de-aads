#include <iostream>

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;

    double L = 0, sign = 1.0;
    for (int i = 1; i <= n; ++i)
    {
        L += (1.0 / (double)i) * sign;
        sign *= -1.0;
    }

    std::cout << L;
    
    return 0;
}