#include <iostream>
#include<algorithm>
int main(int argc, char const *argv[])
{

    std::string s;
    std::cin >> s;

    char current = 'a';
    unsigned short result = 0;
    for (auto &&i : s)
    {
        result += std::min(std::abs(i - current), 26 - std::abs(i - current));
        current = i;
    }
    
    std::cout << result << std::endl;

    // std::cout <<  << std::endl;

    return 0;
}
