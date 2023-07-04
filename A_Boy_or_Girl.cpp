#include<iostream>
#include<set>

int main(int argc, char const *argv[])
{
    
    std::set<char> distinct;

    std::string s;

    std::cin >> s;

    for (size_t i = 0; i < s.length(); i++)
    {
        distinct.insert(s[i]);
    }
    
    if (distinct.size() % 2)
    {
        std::cout << "IGNORE HIM!" << std::endl;
    }
    else
    {
        std::cout << "CHAT WITH HER!" << std::endl;
    }


    return 0;
}
