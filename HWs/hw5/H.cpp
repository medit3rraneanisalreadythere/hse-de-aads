#include <iostream>
#include <algorithm>

int main(int argc, char** argv)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n, m;
    std::cin >> n >> m;

    int height[5005] = {0};
    int st[5005];
    int top = -1;
    int max_area = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int val;
            std::cin >> val;
            if (val == 0)
                height[j]++;
            else
                height[j] = 0;
        }

        top = -1;
        for (int j = 0; j <= m; ++j) {
            int h = (j == m ? 0 : height[j]);
            while (top != -1 && height[st[top]] >= h) {
                int h_val = height[st[top]];
                top--;
                int w = (top == -1 ? j : j - st[top] - 1);
                int area = h_val * w;
                if (area > max_area)
                    max_area = area;
            }
            top++;
            st[top] = j;
        }
    }

    std::cout << max_area;

    return 0;
}