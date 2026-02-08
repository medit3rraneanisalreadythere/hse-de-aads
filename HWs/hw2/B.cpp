#include <iostream>

int main(int argc, char** argv)
{
    short n = 0, pos = 0;
    std::cin >> n;

    for (short i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;

        if (x > 0)
        {
            pos++;
        }
    }

    std::cout << pos;

    return 0;
}