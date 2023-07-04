#include <iostream>
#include <set>
#include <vector>
int main(int argc, char const *argv[])
{

    unsigned short n;
    std::cin >> n;

    std::vector<std::pair<int,int>> teams(n);
    // std::vector<int> game(n * (n - 1));

    for (auto &&i : teams)
    {
        std::cin >> i.first >> i.second;
    }
    

    // std::set<unsigned short> colors;
    
    unsigned int games = 0;
    for (auto &&i : teams)
    {
        for (auto &&j : teams)
        {
            if (i.first == j.second)
            {
                games++;            
            }  
        }
    }
    
    std::cout << games;
    return 0;
}
