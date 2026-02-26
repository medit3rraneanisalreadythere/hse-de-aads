#include <iostream>
#include <vector>
#include <algorithm>

int n, t, cnt = 0;
std::vector<int> perm;
std::vector<bool> used;

void printPerm(const std::vector<int>& v)
{
    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << " ";
    }

    std::cout << "\n";
}

void backtrack(int pos) 
{
    if (cnt >= t) 
    {
        return;
    }
    
    if (pos == n) 
    {
        cnt++;
        printPerm(perm);
        return;
    }

    for (int x = 1; x <= n; ++x) 
    {
        if (used[x]) 
        {
            continue;
        }
        if (x == pos + 1) 
        {
            continue;
        }

        perm[pos] = x;
        used[x] = true;
        
        backtrack(pos + 1);
        
        used[x] = false;
        
        if (cnt >= t) 
        {
            return;
        }
    }
}

int main(int argc, char** argv) 
{
    std::cin >> n >> t;
    
    perm.resize(n);
    used.resize(n + 1, false);
    backtrack(0);

    return 0;
}