#include <vector>
#include <string>

std::vector<std::string> Split(const std::string& str, char delimiter)
{
    std::vector<std::string> ret;

    size_t n = str.length();
    std::string cur;
    for (size_t i = 0; i < n; ++i)
    {
        if (str[i] != delimiter)
        {
            cur += str[i];
        }
        else
        {
            ret.push_back(cur);
            cur = "";
        }
    }
    ret.push_back(cur);

    return ret;
}