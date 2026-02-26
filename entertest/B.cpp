#include <iostream>
#include <vector>
#include <set>

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x = 0;
        std::cin >> x;
        v.push_back(x);
    }

    std::set<int> s;
    std::vector<int> ret;
    for (int i = n - 1; i >= 0; --i)
    {
        if (s.count(v[i]))
        {
            continue;
        }
        else
        {
            s.insert(v[i]);
            ret.push_back(v[i]);
        }
    }

    std::cout << (int)ret.size() << "\n";
    for (int i = (int)ret.size() - 1; i >= 0; --i)
    {
        std::cout << ret[i] << " ";
    }

    return 0;
}