#include <iostream>
#include <chrono>

// using namespace std::chrono;

int main(int argc, char** argv)
{
    unsigned d = 0, m = 0, y = 0;
    std::cin >> d >> m >> y;

    std::chrono::year_month_day ymd{
        std::chrono::year{(int)y},
        std::chrono::month{m},
        std::chrono::day{d}
    };

    auto future_ymd = std::chrono::year_month_day{
        std::chrono::sys_days{ymd} + std::chrono::days{2}
    };

    std::cout << (unsigned)future_ymd.day() << " " << (unsigned)future_ymd.month() << " " << (int)future_ymd.year();

    return 0;
}