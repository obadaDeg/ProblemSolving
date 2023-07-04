#include<iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
        bool hard;
    while (n--)
    {
        std::cin >> hard;
        if (hard)
        {
            break;  
        }
        
    }
    std::cout << ((hard) ? "HARD" : "EASY") << std::endl;
    return 0;
}