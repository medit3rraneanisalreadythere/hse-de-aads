#include <iostream>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::vector;

void print(vector<int> &numbers, int k)
{
	size_t n = numbers.size(), start = 0;

	for (size_t i = 0; i < n; ++i)
    {
    	if (numbers[i] != -222222222)
        {
        	start = i;
        	break;
        }
    }
        

	for (size_t i = start; i < n; i += k)
    {
    	if (numbers[i] != -222222222)
        {
        	std::cout << numbers[i] << " ";
        	numbers[i] = -222222222;
        }
    }

	cout << "\n";
}

int main() {
  int n; cin >> n;
  vector<int> v(n);
  for (int & el : v) cin >> el;
  int q, k; cin >> q;
  while(q--) {
    cin >> k;
    print(v, k);
  }
}