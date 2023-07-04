#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short curI = 0, curJ = 0;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            bool element;
            std::cin >> element;
            if (element == 1)
            {
                curI = i + 1;
                curJ = j + 1;
                break;
            }
        }
    }

    std::cout << std::abs(3 - curI) + std::abs(3 - curJ) << std::endl;

    return 0;
}
