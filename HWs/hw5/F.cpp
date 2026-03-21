#include <iostream>
#include <algorithm>

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    int arr[1000];

    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    std::sort(arr, arr + n);

    int mx = 1, cur = 1;

    for (int i = 1; i < n; ++i) 
    {
        if (arr[i] < 2 * arr[i-1]) 
        {
            cur++;
            if (cur > mx) mx = cur;
        } 
        else 
        {
            cur = 1;
        }
    }

    std::cout << mx;

    return 0;
}