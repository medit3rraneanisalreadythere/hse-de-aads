#include <iostream>
#include <string>
#include <vector>

char pool[36];

void fill()
{
    for (short i = 0; i < 10; ++i)
    {
        pool[i] = '0' + i;
    }
    for (short i = 10; i < 36; ++i)
    {
        pool[i] = 'a' + (i - 10);
    }
}

std::vector<std::string> generate(short l, short k)
{
    // generate all strings l-length-based from k-alphabet
    std::vector<std::string> ret;

    if (l == 1)
    {
        for (short i = 0; i < k; ++i)
        {
            std::string s = "";
            s += pool[i];
            ret.push_back(s);
        }

        return ret;
    }

    std::vector<std::string> base = generate(l - 1, k);

    for (size_t i = 0; i < base.size(); ++i)
    {
        for (short j = 0; j < k; ++j)
        {
            ret.push_back(base[i] + pool[j]);
        }
    }

    return ret;
}

int main(int argc, char** argv) 
{
    fill();

    short n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<std::string> words = generate(n, k);

    for (int i = (words.size() - 1); i >= 0; --i)
    {
        std::cout << words[i] << "\n";
    }

    // for (short i = 0; i < 36; ++i)
    // {
    //     std::cout << pool[i] << " ";
    // }

    // std::cout << (int)('0') << " " << (int)('9') << " " << (int)('a') << " " << (int)('z');

    return 0;
}