#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<int> v1(n), v2(m), v3(k);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v1[i];
    }

    for (int i = 0; i < m; ++i)
    {
        std::cin >> v2[i];
    }

    for (int i = 0; i < k; ++i)
    {
        std::cin >> v3[i];
    }

    std::vector<int> v(n + m + k);
    int i = 0, j = 0, l = 0;
    for (int r = 0; r < n + m + k; ++r)
    {
        if (i >= n) 
        {
            if (j >= m) 
            {
                v[r] = v3[l++];
            } 
            else if (l >= k) 
            {
                v[r] = v2[j++];
            } 
            else 
            {
                v[r] = (v2[j] < v3[l]) ? v2[j++] : v3[l++];
            }
        }
        else if (j >= m) 
        {
            if (l >= k) 
            {
                v[r] = v1[i++];
            } 
            else 
            {
                v[r] = (v1[i] < v3[l]) ? v1[i++] : v3[l++];
            }
        }
        else if (l >= k) 
        {
            v[r] = (v1[i] < v2[j]) ? v1[i++] : v2[j++];
        }
        else 
        {
            int min_val = v1[i];
            int idx = 1;
            
            if (v2[j] < min_val) 
            {
                min_val = v2[j];
                idx = 2;
            }

            if (v3[l] < min_val) 
            {
                min_val = v3[l];
                idx = 3;
            }
            
            if (idx == 1) 
            {
                v[r] = v1[i++];
            }
            else if (idx == 2) 
            {
                v[r] = v2[j++];
            }
            else 
            {
                v[r] = v3[l++];
            }
        }
    }

    for (int i = 0; i < n + m + k; ++i)
    {
        std::cout << v[i] << " ";
    }
}