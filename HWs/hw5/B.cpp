#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    int arr[1000001];

    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    std::cout << arr[n / 2];

    return 0;
}