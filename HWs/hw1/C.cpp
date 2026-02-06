#include <iostream>

int main(int argc, char** argv)
{
    short start_x = 0, start_y = 0, end_x = 0, end_y = 0;
    std::cin >> start_x >> start_y >> end_x >> end_y;

    std::cout << (((start_x == end_x) || (start_y == end_y)) ? "YES" : "NO");

    return 0;
}