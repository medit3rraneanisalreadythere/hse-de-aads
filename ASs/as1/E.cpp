// #include <iostream>
#include <vector>

std::vector< std::vector<int> > Transpose(const std::vector< std::vector<int> >& matrix)
{
    size_t n = matrix.size(), m = matrix[0].size();
    std::vector< std::vector<int> > newM(m, std::vector<int>(n));

    for (size_t i = 0; i < m; ++i)
    {
        for (size_t j = 0; j < n; ++j)
        {
            newM[i][j] = matrix[j][i];
        }
    }

    return newM;
}

// void print_array(const std::vector< std::vector<int> >& matrix)
// {
//     size_t n = matrix.size(), m = matrix[0].size();
//     for (size_t i = 0; i < n; ++i)
//     {
//         for (size_t j = 0; j < m; ++j)
//         {
//             std::cout << matrix[i][j] << " ";
//         }
//         std::cout << "\n";
//     }
// }

// int main(int argc, char** argv)
// {
//     std::vector< std::vector<int> > test(3, std::vector<int>(4));

//     int x = 0;
//     for (short i = 0; i < 3; ++i)
//     {
//         for (short j = 0; j < 4; ++j)
//         {
//             test[i][j] = x;
//             x++;
//         }
//     }

//     print_array(test);
//     print_array(Transpose(test));

//     return 0;
// }