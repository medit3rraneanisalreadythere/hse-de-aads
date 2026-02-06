#include <iostream>
#include <cmath>

const char week[7][4] = { "mon", "tue", "wed", "thu", "fri", "sat", "sun" };

int main(int argc, char** argv)
{
    short day = 0;
    std::cin >> day;
    
    std::cout << week[day - 1]; 

    return 0;
}