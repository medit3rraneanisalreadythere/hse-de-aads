#include <vector>
#include <cmath>
#include <iostream>

std::vector<int> min_max_index(std::vector<int> vec)
{
    std::vector<int> ret(3);
    int mx = -2e9, mn = 2e9, mxi = 0, mni = 0;
    size_t n = vec.size();

    for (size_t i = 0; i < n; ++i)
    {
        if (vec[i] > mx)
        {
            mx = vec[i];
            mxi = i;
        }
        if (vec[i] < mn)
        {
            mn = vec[i];
            mni = i;
        }
    }

    ret[0] = mn; ret[1] = mx; ret[2] = abs(mni - mxi) - 1;
    if (ret[2] == -1)
    {
        ret[2] = 0;
    }

	return ret;
}

using std::vector;

int main() {
  int n; 
  std::cin >> n;
  std::vector<int> vec(n);
  for(int i = 0; i < n; ++i) {
    std::cin >> vec[i];
  }

  std::vector<int> ans = min_max_index(vec);
  for(int i = 0; i < 2; ++i) {
    std::cout << ans[i] << ' '; 
  }
  
  std::cout << ans[2] << std::endl;

  return 0;
}