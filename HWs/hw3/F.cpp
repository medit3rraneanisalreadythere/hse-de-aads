#include <string>
#include <algorithm>

std::string CommonSuffix(const std::string& a, const std::string& b)
{
    size_t aL = a.length(), bL = b.length();
    std::string newA = a, newB = b, ret;
    
    std::reverse(newA.begin(), newA.end());
    std::reverse(newB.begin(), newB.end());

    for (size_t i = 0; i < std::min(aL, bL); ++i)
    {
        if (newA[i] == newB[i])
        {
            ret += newA[i];
        }
        else
        {
            break;
        }
    }

    std::reverse(ret.begin(), ret.end());
    return ret;
}