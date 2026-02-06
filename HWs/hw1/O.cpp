#include <iostream>

int main(int argc, char** argv)
{
    short x = 0;
    std::cin >> x;

    std::cout << "The next number for the number "
              << x
              << " is "
              << x + 1
              << ".\nThe previous number for the number "
              << x
              << " is "
              << x - 1
              << ".";

    return 0;
}