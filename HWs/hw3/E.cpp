#include <iostream>
#include <vector>

using std::string;
using std::cin;
using std::cout;
using std::vector;

const int INF = -222222222;

void print(vector<int> &numbers, int k) 
{
    int n = numbers.size();

    int st = -1;
    for (int i = 0; i < n; ++i) 
    {
        if (numbers[i] != INF) 
        {
            st = i;
            break;
        }
    }

    if (st == -1) 
    {
        std::cout << "\n";
        return;
    }

    int aliveStep = 0;
    for (int i = st; i < n; ++i)
    {
        if (numbers[i] != INF)
        {
            if (aliveStep % k == 0)
            {
                cout << numbers[i] << " ";
                numbers[i] = INF;
            }
            aliveStep++;
        }
    }

    std::cout << "\n";
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