#include<iostream>

int main(int argc, char const *argv[])
{
    std::string s;
    std::cin >> s;
    std::string copy;
    copy.resize(s.length());
    for (int i = s.length() - 1, j = 0; i >= 0; i--, j++)
    {
        copy[j] = s[i];
    }
    std::string word;
    std::cin >> word;
    
    if (word == copy)
    {
        std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;

    
    return 0;
}
