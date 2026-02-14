#include <vector>
#include <iostream>

std::vector<int> swap_max_min(std::vector<int> v)
{
    size_t n = v.size(), mni = 0, mxi = 0;
    int mn = v[0], mx = v[0];

    for (size_t i = 0; i < n; ++i)
    {
        if (v[i] < mn)
        {
            mn = v[i];
            mni = i;
        }
        if (v[i] > mx)
        {
            mx = v[i];
            mxi = i;
        }
    }

    std::vector ret = v;
    ret[mni] = mx; ret[mxi] = mn;
    return ret;
}

const long long inf = 2e18;

int main() {
  std::vector<int> v;
  int a;
  while(std::cin >> a) v.push_back(a);
  v = swap_max_min(v);
  for (int el : v)
    std::cout << el << ' ';
}