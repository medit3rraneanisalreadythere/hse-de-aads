#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string s;
    std::cin >> s;

    int f = -1, l = -1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'f')
        {
            if (f == -1)
            {
                f = i;
            }
            else
            {
                l = i;
            }
        }
    }

    if (f == -1)
    {}
    else if (l == -1)
    {
        std::cout << f;
    }
    else
    {
        std::cout << f << " " << l;
    }

    return 0;
}