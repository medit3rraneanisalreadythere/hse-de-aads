#include <iostream>
#include <vector>

void print(size_t i)
{
    std::cout << "Size: " << i;
}

void print(std::vector<int> v)
{
    std::cout << "Vector:\n";

    for (size_t i = 0; i < v.size(); ++i)
    {
        std::cout << "Value \"" << v[i] << "\" at index " << i << "\n";
    }
}

int main() {
    size_t n; std::cin >> n;
    std::vector<int> v(n);
    for (size_t i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    print(n);
    std::cout << std::endl;
    print(v);
}