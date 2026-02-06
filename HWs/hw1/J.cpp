#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char** argv)
{
    double a = 0, b = 0;
    std::cin >> a >> b;

    std::cout << std::fixed
              << std::setprecision(6)
              << sqrt(a * a + b * b);
    
    return 0;
}