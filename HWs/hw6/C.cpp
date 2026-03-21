#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n; std::cin >> n;

    std::vector<int> fibb(n + 1, 1);
    for (int i = 2; i <= n; ++i)
        fibb[i] = ((fibb[i - 1] + fibb[i - 2]) % 10);

    std::cout << fibb[n];

    return 0;
}