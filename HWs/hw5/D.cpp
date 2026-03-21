#include <iostream>

int main(int argc, char** argv)
{
    int n; std::cin >> n;
    int cnt[20001] = {0};

    for (int i = 0; i < n; ++i) 
    {
        int x; std::cin >> x;
        cnt[x + 10000]++;
    }

    bool fst = true;
    for (int i = 0; i < 20001; ++i) 
    {
        while (cnt[i] > 0) 
        {
            if (!fst) std::cout << " ";
            std::cout << (i - 10000);
            fst = false;
            cnt[i]--;
        }
    }

    return 0;
}