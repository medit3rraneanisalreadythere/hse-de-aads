#include <iostream>

int main(int argc, char** argv)
{
    short n = 0;
    std::cin >> n;

    int arr[35];
    for (short i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;

        if (i & 1)
        {
            arr[i] = arr[i - 1];
            arr[i - 1] = x;
        }
        else
        {
            arr[i] = x;
        }
    }

    for (short i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}