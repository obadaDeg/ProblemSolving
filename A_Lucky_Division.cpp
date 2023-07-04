#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    short n;
    std::cin >> n;

    bool almost = (!(n % 4) || !(n % 7)) ? true : false;

    if (almost)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        almost = true;
        while (n != 0)
        {
            short digit = n % 10;
            if (digit == 4 || digit == 7 )
            {
                n /= 10;
                continue;
            }
            
            almost = false;
            break;
        }

        if (almost)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
