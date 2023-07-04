#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
    unsigned short test;
    std::cin >> test;
    while (test--)
    {
        unsigned int length;
        std::cin >> length;
        std::set<unsigned int> a;
        for (size_t i = 0; i < length; i++)
        {
            unsigned int element;
            std::cin >> element;
            a.insert(element);
        }
        bool odd = true, even = true;
        bool isSmallerOdd = false;
        for (auto &&i : a)
        {
            if (i % 2)
            {
                even &= (isSmallerOdd);
                isSmallerOdd = true;
            }
            else
            {
                odd &= (isSmallerOdd);
            }
        }
        std::cout << (odd || even ? "YES" : "NO") << std::endl;
    }
    return 0;
}
