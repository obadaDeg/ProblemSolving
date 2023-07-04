#include<iostream>

int main(int argc, char const *argv[])
{
    long long number;
    short times;

    std::cin >> number >> times;

    while (times--)
    {
        if (number % 10 != 0)
        {
            number--;   
        }
        else{
            number /=10;
        }
        
    }
    std::cout << number << std::endl;
    return 0;
}
