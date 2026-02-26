#include <iostream>
#include <vector>

void generate(int n, int min_val, std::vector<int>& current, std::vector<std::vector<int>>& all) 
{
    if (n == 0) 
    {
        all.push_back(current);
        return;
    }

    for (int x = min_val; x <= n; x++) 
    {
        current.push_back(x);
        generate(n - x, x, current, all);
        current.pop_back();
    }
}

int main(int argc, char** argv) 
{
    int n = 0;
    std::cin >> n;

    std::vector<std::vector<int>> partitions;
    std::vector<int> current;
    generate(n, 1, current, partitions);

    int total = partitions.size();
    for (int i = total - 1; i >= 0; --i) 
    {
        std::vector<int> part = partitions[i];

        for (int j = 0; j < part.size(); ++j) 
        {
            if (j > 0) 
            {
                std::cout << " ";
            }
            
            std::cout << part[j];
        }
        std::cout << "\n";
    }

    return 0;
}