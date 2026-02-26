#include <string>

// auto [start, length] = FindVowels(text, pos);

// a, e, i, o, u, y
bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    {
        return true;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
    {
        return true;
    }
    return false;
}

std::pair<size_t, size_t> FindVowels(std::string s, size_t pos)
{
    size_t start = -1, length = 0;

    for (size_t i = pos; i < s.length(); ++i)
    {
        if (isVowel(s[i]))
        {
            if ((int)start == -1)
            {
                start = i;
            }

            length++;
            continue;
        }
        else if ((int)start == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return std::make_pair(start, length);
}