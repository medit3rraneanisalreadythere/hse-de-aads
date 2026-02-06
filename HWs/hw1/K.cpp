#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
    int code = 0;
    double a = 0, b = 0;
    std::cin >> code >> a >> b;

    switch (code)
    {
    case 0:
        std::cout << a + b;
        break;
    
    case 1:
        std::cout << a - b;
        break;

    case 2:
        std::cout << a * b;
        break;

    case 3:
        std::cout << a / b;
        break;

    case 4:
        std::cout << pow(a, b);
        break;

    case 5:
        std::cout << pow(b, (1.0 / a));
        break;

    default:
        std::cout << -1;
        break;
    }

    return 0;
}