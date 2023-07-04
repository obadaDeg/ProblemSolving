#include <iostream>
#include <vector>
#include <limits>

int main(int argc, char const *argv[])
{
    unsigned short contests;
    std::cin >> contests; 
    short points; 
    std::cin >> points;
    short maxPoints = points, minPoints = maxPoints;
    unsigned short ans = 0;
    for (size_t i = 1; i < contests; i++)
    {
        std::cin >> points;
        if (points > maxPoints)
        {
            maxPoints = points;
            ans++;
        }
        else if (points < minPoints)
        {
            minPoints = points;
            ans++;
        }
        
    }
    

    std::cout << ans << std::endl;
    
    
    
    return 0;
}
