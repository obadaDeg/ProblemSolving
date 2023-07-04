#include<iostream>
#include<algorithm>
#include<vector>
int main(int argc, char const *argv[])
{

    unsigned short n;
    std::cin >> n;
    std::vector<unsigned short> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }
    
    std::sort(vec.begin(), vec.end());
    
    for (auto &&i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    

    return 0;
}
