#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string s;
    std::cin >> s;

    int balance = 0;
    for (auto c: s)
    {
        if (c == '(') balance++;
        if (c == ')') balance--;
        if (balance < 0)
        {
            std::cout << "NO";
            return 0;
        }
    }

    if (balance) std::cout << "NO";
    else std::cout << "YES";

    return 0;
}