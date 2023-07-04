#include <iostream>
#include <set>
int main(int argc, char const* argv[])
{
    std::set<std::string> current;
    unsigned int magnets;
    std::cin >> magnets;
    unsigned int groups = 1;
    while (magnets--)
    {
        std::string s;
        std::cin >> s;

        current.insert(s);

        if (current.size() == 2)
        {
            current.clear();
            current.insert(s);
            groups++;
        }

    }

    std::cout << groups << std::endl;



    return 0;
}
