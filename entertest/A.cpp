#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string name;
    std::string surname;
    int dd;
    int mm;
    int yy;
};

bool cmp_name(const Student& a, const Student& b)
{
    if (a.surname < b.surname)
    {
        return true;
    }

    if (a.surname == b.surname && a.name < b.name)
    {
        return true;
    }

    if (a.surname == b.surname && a.name == b.name && a.yy < b.yy)
    {
        return true;
    }

    if (a.surname == b.surname && a.name == b.name && a.yy == b.yy && a.mm < b.mm)
    {
        return true;
    }

    if (a.surname == b.surname && a.name == b.name && a.yy == b.yy && a.mm == b.mm && a.dd < b.dd)
    {
        return true;
    }

    return false;
}

bool cmp_date(const Student& a, const Student& b)
{
    if (a.yy < b.yy)
    {
        return true;
    }

    if (a.yy == b.yy && a.mm < b.mm)
    {
        return true;
    }

    if (a.yy == b.yy && a.mm == b.mm && a.dd < b.dd)
    {
        return true;
    }
    
    if (a.yy == b.yy && a.mm == b.mm && a.dd == b.dd && a.surname < b.surname)
    {
        return true;
    }

    if (a.yy == b.yy && a.mm == b.mm && a.dd == b.dd && a.surname == b.surname && a.name < b.name)
    {
        return true;
    }

    return false;
}

int main(int argc, char** argv)
{
    int n = 0;
    std::cin >> n;

    std::vector<Student> v;
    for (int i = 0; i < n; ++i)
    {
        std::string name, surname;
        int dd = 0, mm = 0, yy = 0;
        std::cin >> name >> surname >> dd >> mm >> yy;
        v.push_back({name, surname, dd, mm, yy});
    }

    std::string sort_type;
    std::cin >> sort_type;

    if (sort_type == "name")
    {
        std::sort(v.begin(), v.end(), cmp_name);
    }
    else
    {
        std::sort(v.begin(), v.end(), cmp_date);
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << v[i].name << " " << v[i].surname << " " 
                  << v[i].dd << "." << v[i].mm << "." << v[i].yy << "\n";
    }
    
    return 0;
}