#include <string_view>

bool NextToken(std::string_view& sv, char delimiter, std::string_view& token) 
{
    if (sv.empty()) 
    {
        return false;
    }

    auto pos = sv.find(delimiter);
    if (pos == std::string_view::npos) 
    {
        token = sv;
        sv = std::string_view();
        return true;
    }

    token = sv.substr(0, pos);
    sv = sv.substr(pos + 1);
    
    return true;
}