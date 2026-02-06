#include <iostream>

// A [a b c]

// Confuse (A) [a+b+c-a a+b+c-b a+b+c-c] = [b+c a+c a+b]

// Confuse (Confuse (A)) [2a+2b+2c-b-c 2a+2b+2c-a-c 2a+2b+2c-a-b] =
// = [2a+b+c a+2b+c a+b+2c]

// Confuse (Confuse (Confuse (A))) [3a+3b+3c-2a-b-c 3a+3b+3c-a-2b-c 
// 3a+3b+3c-a-b-2c] = [a+2b+2c 2a+b+2c 2a+2b+c]

// A [a b c d e]

// Confuse (A) [b+c+d+e a+c+d+e a+b+d+e a+b+c+e a+b+c+d]

// Confuse (Confuse (A)) [4a+3b+3c+3d+3e 3a+4b+3c+3d+3e 3a+3b+4c+3d+3e 
// 3a+3b+3c+4d+3e 3a+3b+3c+3d+4e]

int main(int argc, char** argv)
{
    int n = 0, k = 0;
	std::cin >> n >> k;

	long long mx = -2000000001, mn = 2000000001;
	for (int i = 0; i < n; ++i)
    {
    	long long x = 0;
    	std::cin >> x;
    	mx = std::max(mx, x);
    	mn = std::min(mn, x);
    }

	std::cout << mx - mn;

    return 0;
}