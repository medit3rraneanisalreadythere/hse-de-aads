#include <iostream>
#include <vector>

std::string reversed(const std::string& s)
{
    return std::string(s.rbegin(), s.rend());
}

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;

    std::vector<int> ls(26, 0);
    for (int i = 0; i < n; ++i)
    {
        char c;
        std::cin >> c;
        ls[c - 'A']++;
    }

    std::string left;
    for (int i = 0; i < 26; ++i)
    {
        if (ls[i] > 1)
        {
            left += std::string(ls[i] / 2, (char)('A' + i));
            ls[i] -= ((ls[i] / 2) * 2);
        }
    }

    std::string right = reversed(left);
    for (int i = 0; i < 26; ++i)
    {
        if (ls[i] == 1)
        {
            std::cout << left << (char)('A' + i) << reversed(left);
            return 0;
        }
    }

    std::cout << left << reversed(left);

    return 0;
}