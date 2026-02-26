#include <iostream>
#include <string>

bool is_almost_palimdrome(const std::string& s, int k)
{
    size_t l = s.length();

    if (l == 0)
    {
        return true;
    }

    int cnt = 0;
    for (size_t i = 0; i < (l / 2); ++i)
    {
        if (s[i] != s[l - i - 1])
        {
            cnt++;
        }
    }

    return (cnt <= k);
}

int main(int argc, char** argv)
{
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::string s;
    std::cin >> s;

    int ret = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            ret += is_almost_palimdrome(s.substr(i, j - i + 1), k);
        }
    }

    std::cout << ret;

    return 0;
}