#include <iostream>
#include <string>
// #include <vector>
// #include <algorithm>
// #include <cmath>

long long cnt = 0;
int n = 0;

void gen(std::string cur)
{
    if ((int)cur.length() == n)
    {
        cnt++;
        return;
    }

    gen(cur + "X");
    if ((int)cur.length() > 0)
    {
        if (cur[cur.length() - 1] != 'Y') gen(cur + "Y");
    }
    else gen(cur + "Y");
}

int main(int argc, char** argv)
{
    std::cin >> n;
    gen("");
    std::cout << cnt;

    return 0;
}