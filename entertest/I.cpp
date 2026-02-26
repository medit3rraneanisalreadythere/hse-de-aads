#include <iostream>
#include <vector>

unsigned int cur = 0, a, b;
unsigned int nextRand24() 
{
    cur = cur * a + b;
    return cur >> 8; 
}

int main(int argc, char** argv)
{
    int n = 0, m = 0;
    std::cin >> n >> m >> a >> b;

    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        v[i] = nextRand24() % m;
    }

    int ret = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (v[i] > v[j])
            {
                ret++;
            }
        }
    }

    std::cout << ret;
}