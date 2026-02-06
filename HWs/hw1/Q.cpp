#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    size_t cnt = 0;
    std::string tmp = "";

    while (std::cin >> tmp)
    {
        cnt++;
    }
    
    std::cout << cnt;

    return 0;
}