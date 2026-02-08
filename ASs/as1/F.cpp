#include <string>
#include <iostream>

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

bool is_letter(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }

    if (c >= 'A' && c <= 'Z')
    {
        return true;
    }

    return false;
}

int CountPalindromes(const std::string& s)
{
    int cnt = 0;
    
    std::string cur = "";
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (is_letter(s[i]))
        {
            cur += s[i];
        }
        else
        {
            if (cur.length() > 0 && CheckPalindrome(cur))
            {
                cnt++;
            }
            cur = "";
        }
    }

    if (cur.length() > 0 && CheckPalindrome(cur))
    {
        cnt++;
    }

    return cnt;
}

int main()
{
    std::cout << CountPalindromes("aba  abc");
}


// Вы уже посылали это решение
// :)