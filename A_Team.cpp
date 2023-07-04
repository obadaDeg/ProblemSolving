#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    unsigned short problems;
    unsigned short ans = 0;
    bool sure;
    std::cin >> problems;
    for (size_t i = 0; i < problems; i++)
    {
        unsigned short check = 0;
        for (size_t i = 0; i < 3; i++)
        {
            std::cin >> sure;
            if (sure)
            {
                check++;
            }
        }
        if (check > 1)
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;

    return 0;
}
