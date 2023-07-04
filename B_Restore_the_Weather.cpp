#include <iostream>
#include <algorithm>
#include <vector>
int main(int argc, char const *argv[])
{
    unsigned short test;
    std::cin >> test;
    while (test--)
    {
        unsigned int daysNumber, maximumDiff;
        std::cin >> daysNumber >> maximumDiff;
        std::vector<std::pair<int, int>> a(daysNumber);
        std::vector<int> b(daysNumber);
        for (size_t i = 0; i < daysNumber; i++)
        {
            std::cin >> a[i].first;
            a[i].second = i;
        }
        for (size_t i = 0; i < daysNumber; i++)
        {
            std::cin >> b[i];
        }
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end(), std::less<int>());
        std::vector<int> solution(daysNumber);
        for (size_t i = 0; i < daysNumber; i++)
        {
            solution[a[i].second] = b[i];
        }
        for (auto &&i : a)
        {
            std::cout << i.first << " " << i.second << " ";
        }
        std::cout << std::endl;
        for (auto &&i : b)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        
        
        
        for (size_t i = 0; i < daysNumber; i++)
        {
            std::cout << solution[i] << std::endl;
        }
        std::cout << "\n";
    }
 
    return 0;
}
