#include <iostream>

int main(int argc, char** argv)
{
    short a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    std::cout << (a < b) && (b < c);

    return 0;
}