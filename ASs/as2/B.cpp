#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    std::vector<std::string> pts;

    std::string s;
    while (std::cin >> s)
        pts.push_back(s);

    std::sort(pts.begin(), pts.end(), [](std::string a, std::string b)
                                  {
                                      return a + b > b + a;
                                  });

    for (auto x: pts)
        std::cout << x;

    return 0;
}