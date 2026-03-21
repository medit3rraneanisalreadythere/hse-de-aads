#include <iostream>

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    bool has[15001] = {false};
    int un = 0;

    for (int i = 0; i < n; ++i) 
    {
        int x; std::cin >> x;
        if (!has[x]) 
        {
            has[x] = true;
            un++;
        }
    }

    std::cout << 15000 - un;

    return 0;
}