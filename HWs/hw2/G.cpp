#include <iostream>

int main(int argc, char** argv)
{
    short n = 0;
    std::cin >> n;

    int arr[100][100];
    for (short i = 0; i < n; ++i)
    {
        for (short j = 0; j < n; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    bool flag = true;
    for (short i = 0; i < n; ++i)
    {
        for (short j = i; j < n; ++j)
        {
            if (arr[i][j] != arr[j][i])
            {
                flag = false;
            }
        }
    }

    std::cout << (flag ? "yes" : "no");

    return 0;
}