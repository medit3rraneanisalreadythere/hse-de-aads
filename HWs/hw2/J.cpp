#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string s;
    std::cin >> s;
    int l = s.length();

    for (int i = 0; i < (l / 2); ++i)
    {
        if (s[i] != s[l - i - 1])
        {
            std::cout << "no";
            return 0;
        }
    }

    std::cout << "yes";

    return 0;
}