#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    long long x = 0, y = 0;
    
    std::string dir = "";
    int steps = 0;
    while (std::cin >> dir >> steps)
    {
        if (dir == "North")
        {
            y += steps;
        }
        else if (dir == "South")
        {
            y -= steps;
        }
        else if (dir == "West")
        {
            x -= steps;
        }
        else if (dir == "East")
        {
            x += steps;
        }
        else
        {
            break;
        }
    }

    std::cout << x << " " << y;

    return 0;
}