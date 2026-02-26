#include <iostream>

int trucks(int n, int k) 
{
    if (n <= k) 
    {
        return 1;
    }
    
    int half1 = (n + 1) / 2;
    int half2 = n / 2;
    
    return trucks(half1, k) + trucks(half2, k);
}

int main(int argc, char** argv) 
{
    int n = 0, k = 0;
    std::cin >> n >> k;
    
    std::cout << trucks(n, k);

    return 0;
}