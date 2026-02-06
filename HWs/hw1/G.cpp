#include <iostream>

int main(int argc, char** argv)
{
    char i[4];
    std::cin >> i;

    std::cout << (i[0] - '0') + (i[1] - '0') + (i[2] - '0');

    return 0;
}