#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    int ssl = s1.length(), sl = s2.length();
    if (ssl > sl)
    {
        std::cout << "no";
        return 0;
    }

    for (int i = 0; i <= sl - ssl; ++i)
    {
        if (s1 == s2.substr(i, ssl))
        {
            std::cout << "yes";
            return 0;
        }
    }

    std::cout << "no";

    return 0;
}