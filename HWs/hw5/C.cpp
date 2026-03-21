#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    int n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    
    char pairs[676][2];
    for (int i = 0; i < k; ++i) 
    {
        std::string p; std::cin >> p;
        pairs[i][0] = p[0];
        pairs[i][1] = p[1];
    }
    
    int freq[26] = {0};
    for (int i = 0; i < n; ++i)
        freq[s[i] - 'a']++;
    
    long long ans = 0;
    for (int i = 0; i < n; ++i) 
    {
        freq[s[i] - 'a']--;
        
        for (int j = 0; j < k; ++j) 
            if (pairs[j][0] == s[i]) ans += freq[pairs[j][1] - 'a'];
    }
    
    std::cout << ans;
    
    return 0;
}