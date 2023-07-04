#include<iostream>

int main(int argc, char const *argv[])
{

    std::string s;

    std::cin >> s;
    unsigned short upper = 0 , lower = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    
    if (upper > lower)
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    
    std::cout << s << std::endl;

    return 0;
}
