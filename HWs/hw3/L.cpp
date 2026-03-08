#include <iostream>

void hanoi(int n, int from, int to, int aux)
{
    if (n == 0)
    {
        return;
    }

    hanoi(n - 1, from, aux, to);

    std::cout << n << " " << from << " " << to << "\n";

    hanoi(n - 1, aux, to, from);
}

int main(int argc, char** argv)
{
    int n;
    std::cin >> n;

    hanoi(n, 1, 3, 2);
}