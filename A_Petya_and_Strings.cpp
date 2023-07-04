#include<iostream>
#include<string>
int main(int argc, char const *argv[])
{

    std::string a, b;
    std::cin >> a >> b;

    for (auto &&i : a)
    {
        i = std::tolower(i);
    }
    for (auto &&i : b)
    {
        i = std::tolower(i);
    }

    if (b == a)
    {
        std::cout << 0 << std::endl;
    }
    else if (b > a)
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        std::cout << -1 << std::endl;
    }
    
    
    return 0;
}
