#include <vector>
#include <iostream>

int min_element(std::vector<int> v)
{
    int mn = 2147483647, flag = 0;

    for (size_t i = 0; i < v.size(); ++i)
    {
        if (v[i] & 1)
        {
            flag = 1;
            mn = std::min(v[i], mn);
        }
    }

    if (flag == 0)
    {
        return 0;
    }
    
    return mn;
}

const int inf = 2e18;

signed main() {
  std::vector<int> v;
  int a;
  while(std::cin >> a) v.push_back(a);

  std::cout << min_element(v);
}