#include <iostream>

int main(int argc, char** argv)
{
    bool flag = false;
    short n = 0;
    std::cin >> n;

    int prev = 0;
    std::cin >> prev;

    for (short i = 1; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;

        if (x >= 0 && prev >= 0)
        {
            flag = true;
        }

        if (x < 0 && prev < 0)
        {
            flag = true;
        }

        prev = x;
    }

    std::cout << (flag ? "YES" : "NO");

    return 0;
}