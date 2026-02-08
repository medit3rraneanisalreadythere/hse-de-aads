#include <iostream>
#include <set>

int main(int argc, char** argv)
{
    short n = 0;
    std::cin >> n;

    std::set<int> s;
    for (short i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;
        s.insert(x);
    }

    std::cout << s.size();

    return 0;
}