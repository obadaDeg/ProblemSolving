#include<iostream>

int main(int argc, char const *argv[])
{
    unsigned int gamesNum;
    std::cin >> gamesNum;
    unsigned int anton = 0;
    unsigned int danik = 0;
    while (gamesNum--)
    {
        char currentWinner;
        std::cin >> currentWinner;
        if (currentWinner == 'D')
        {
            danik++;
        }
        else if (currentWinner == 'A')
        {
            anton++;
        }
    }

    if (danik == anton)
    {
        std::cout << "Friendship" << std::endl;
    }
    else if (danik > anton)
    {
        std::cout << "Danik" << std::endl;
    }
    else
    {
        std::cout << "Anton" << std::endl;

    }
    
    
    
    
    
    return 0;
}
