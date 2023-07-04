#include<iostream>
#include<string>
using ll = long long;
int main(int argc, char const *argv[])
{
    ll number;
    std::cin >> number;

    std::string num = std::to_string(number);
    short count = 0;
    for (auto &&i : num)
    {
        if (i == '7' || i == '4')
        {
            count++;
        }
        
    }

    if (count == 4 || count == 7)
    {
        std::cout << "YES" <<std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}
