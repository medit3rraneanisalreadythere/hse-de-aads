#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    }

    for (int i = 1; i < n; ++i) 
    {
        int key = v[i];
        int j = i - 1;
        bool is_moved = false;

        while (j >= 0 && v[j] > key) 
        {
            v[j + 1] = v[j];
            j--;
            is_moved = true;
        }

        v[j + 1] = key;

        if (is_moved)
        {
            for (int k = 0; k < n; ++k)
            {
                std::cout << v[k] << " ";
            }
            std::cout << "\n";
        }
    }
}