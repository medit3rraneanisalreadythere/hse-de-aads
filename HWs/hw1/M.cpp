#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
    int n = 0, a = 0;
    std::cin >> n >> a;

    double S = 0;
    for (int i = n; i >= 1; --i)
    {
        S = sqrt(i * a + S);
    }

    std::cout << S;
    
    return 0;
}