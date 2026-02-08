#include <iostream>
#include <vector>

// std::vector<int> vars;

// int arr[4];
// void res(int pos)
// {
//     vars.push_back()
// }

int apply(int x, int y, int op)
{
    // op: 1:+, 2:-, 3:*
    if (op == 1)
    {
        return x + y;
    }
    else if (op == 2)
    {
        return x - y;
    }
    else
    {
        return x * y;
    }
}

int main(int argc, char** argv) 
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;
    // arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;

    // a op b op c op d => 3 loops, 3*3*3=27 vars
    // bool flag = false;
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            for (int k = 1; k <= 3; ++k)
            {
                // ((a b) c) d
                // (a (b c)) d
                // a ((b c) d)
                // a (b (c d))
                // (a b) (c d)

                if (apply(apply(apply(a, b, i), c, j), d, k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(apply(a, apply(b, c, i), j), d, k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(a, apply(apply(b, c, i), d, j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(a, apply(b, apply(c, d, i), j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(apply(a, b, i), apply(c, d, j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(apply(apply(-a, b, i), c, j), d, k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(apply(-a, apply(b, c, i), j), d, k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(-a, apply(apply(b, c, i), d, j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(-a, apply(b, apply(c, d, i), j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
                if (apply(apply(-a, b, i), apply(c, d, j), k) == 24)
                {
                    std::cout << "YES";
                    return 0;
                }
            }
        }
    }

    std::cout << "NO";

    return 0;
}