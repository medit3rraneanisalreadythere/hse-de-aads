#include <iostream>
#include <vector>

void merge(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& res) 
{
    int n = v1.size();
    int m = v2.size();

    if (n == 0)
    {
        res = v2;
    }
    else if (m == 0)
    {
        res = v1;
    }
    else
    {
        int i = 0, j = 0;
        for (int k = 0; k < m + n; ++k)
        {
            if (i >= n)
            {
                res[k] = v2[j];
                ++j;
            }
            else if (j >= m)
            {
                res[k] = v1[i];
                ++i;
            }
            else if (v1[i] < v2[j])
            {
                res[k] = v1[i];
                i++;
            }
            else
            {
                res[k] = v2[j];
                j++;
            }
        }
    }
}

void merge_sort(std::vector<int>& v) 
{
    int n = v.size();
    if (n <= 1)
    {
        return;
    }

    int mid = n / 2;
    std::vector<int> left(mid);
    std::vector<int> right(n - mid);

    for (int i = 0; i < mid; ++i)
    {
        left[i] = v[i];
    }

    for (int i = 0; i < n - mid; ++i)
    {
        right[i] = v[mid + i];
    }

    merge_sort(left);
    merge_sort(right);

    merge(left, right, v);
}

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    merge_sort(v);

    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i] << " ";
    }
}