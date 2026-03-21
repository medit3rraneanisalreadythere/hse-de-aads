#include <iostream>
// #include <string>
#include <vector>
// #include <algorithm>
// #include <cmath>

int main(int argc, char** argv)
{
    int n, m, k; std::cin >> n >> m >> k;
    std::vector< std::vector<long long> > sums(n, std::vector<long long>(m, 0));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            int x; std::cin >> x;
            if (i == 0 && j == 0) sums[0][0] = x;
            else if (i == 0) sums[0][j] = sums[0][j - 1] + x;
            else if (j == 0) sums[i][0] = sums[i - 1][0] + x;
            else sums[i][j] = sums[i - 1][j] 
                            + sums[i][j - 1] 
                            + x
                            - sums[i - 1][j - 1];
        }
    // sums[i][j] = сумма всех элементов в прямоугольнике
    // (0, 0) -> (i, j)

    /*
    2 - - - *
    - + + + *
    - + + + *
    - + + + *
    * * * * *
    */

    for (int i = 0; i < k; ++i)
    {
        int x1, y1, x2, y2; std::cin >> x1 >> y1 >> x2 >> y2;
        x1--; y1--; x2--; y2--;
        long long answ = sums[x2][y2];
        if (x1 > 0) answ -= sums[x1 - 1][y2];
        if (y1 > 0) answ -= sums[x2][y1 - 1];
        if (x1 > 0 && y1 > 0) answ += sums[x1 - 1][y1 - 1];
        std::cout << answ << "\n";
    }

    return 0;
}