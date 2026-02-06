#include <iostream>

const int L = 109;

int main(int argc, char** argv)
{
    int v = 0, t = 0;
    std::cin >> v >> t;

    const int s = v * t;
    if (s < 0)
    {
        std::cout << (L - ((s * -1) % L)) % L;
    }
    else
    {
        std::cout << s % L;
    }

    return 0;
}