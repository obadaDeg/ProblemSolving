#include<iostream>
#include<stack>
int main(int argc, char const *argv[])
{

    unsigned int events;
    std::cin >> events;

    unsigned int untreated = 0;

    unsigned int hired = 0;
    
    for (size_t i = 0; i < events; i++)
    {
        short crimes;
        std::cin >> crimes;

        if (crimes != -1)
        {
            hired += crimes;
        }
        else
        {
            if (hired == 0)
            {
                untreated++;
            }
            else
            {
                hired--;
            }
            
        }
        
        
    }   

    std::cout << untreated << std::endl;

    return 0;
}
