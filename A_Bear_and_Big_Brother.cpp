#include <iostream>

int main(int argc, char const *argv[])
{

    unsigned short limark, bob;
    std::cin >> limark >> bob;
    unsigned short years = 0;
    while (limark <= bob)
    {
        limark *= 3;
        bob *= 2;
        years++;
    }

    std::cout << years << std::endl;
    return 0;
}
