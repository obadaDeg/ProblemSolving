#include <iostream>

int main(int argc, char const *argv[])
{
    std::string s;
    std::cin >> s;
    bool dangerous = false;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s.substr(i, 7) == "1111111" || s.substr(i, 7) == "0000000")
        {
            dangerous = true;
            break;
        }
        
    }

    std::cout << ((dangerous)? "YES" : "NO") << std::endl;
    
    return 0;
}
