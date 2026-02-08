#include <iostream>

int main(int argc, char** argv)
{
    while (true)
    {
        short c = 0;
        std::cin >> c;

        if (c == 0)
        {
            break;
        }
        
        std::cout << (char)c;
    }

    return 0;
}