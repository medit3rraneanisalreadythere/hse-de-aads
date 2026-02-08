#include <iostream>

int main(int argc, char** argv)
{
    int wd = 0, h = 0, m = 0, n = 0;
    std::cin >> wd >> h >> m >> n;

    int now = (wd - 1) * 24 * 60 + h * 60 + m;
    int t_b = 1e9;
    int wd_b = 0, h_b = 0, m_b = 0;

    for (int i = 0; i < n; ++i)
    {
        int wd_i = 0, h_i = 0, m_i = 0;
        std::cin >> wd_i >> h_i >> m_i;

        if (wd_i == 0) 
        {
            for (int add_day = 0; add_day < 7; ++add_day) 
            {
                int x = (wd - 1 + add_day) % 7;
                int t = x * 24 * 60 + h_i * 60 + m_i;
                
                if (t < now) 
                {
                    t += 7 * 24 * 60;
                }

                if (t < t_b) 
                {
                    t_b = t;
                    wd_b = x + 1;
                    h_b = h_i;
                    m_b = m_i;
                }
            }
        } 
        else 
        {
            int t = (wd_i - 1) * 24 * 60 + h_i * 60 + m_i;

            if (t < now) 
            {
                t += 7 * 24 * 60;
            }

            if (t < t_b) 
            {
                t_b = t;
                wd_b = wd_i;
                h_b = h_i;
                m_b = m_i;
            }
        }
    }

    std::cout << wd_b << " " << h_b << " " << m_b;

    return 0;
}