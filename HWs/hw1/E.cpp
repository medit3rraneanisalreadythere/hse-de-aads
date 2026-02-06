#include <iostream>

int main(int argc, char** argv)
{
    short start_x = 0, start_y = 0, end_x = 0, end_y = 0;
    std::cin >> start_x >> start_y >> end_x >> end_y;

    std::cout << ((((abs(start_x - end_x) == 1) && (abs(start_y - end_y) == 2)) 
                || ((abs(start_x - end_x) == 2) && (abs(start_y - end_y) == 1))) 
                    ? "YES" : "NO");

    return 0;
}