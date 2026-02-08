#include <iostream>
#include <string>

bool CheckPalindrome(const std::string& s)
{
    size_t l = s.length();

    if (l == 0)
    {
        return true;
    }

    for (size_t i = 0; i < (l / 2); ++i)
    {
        if (s[i] != s[l - i - 1])
        {
            return false;
        }
    }

    return true;
}

std::string RemoveSpaces(const std::string& s)
{
    std::string ret = "";
    size_t l = s.length();

    for (size_t i = 0; i < l; ++i)
    {
        if (s[i] != ' ')
        {
            ret += s[i];
        }
    }

    return ret;
}

int main(int argc, char** argv)
{
    std::string s;
    std::getline(std::cin, s);


    std::cout << (CheckPalindrome(RemoveSpaces(s)) ? "yes" : "no");

    return 0;
}