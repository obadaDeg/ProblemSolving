#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    unsigned n;
    std::cin >> n;
    std::vector<unsigned> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }
    std::vector<unsigned>::iterator leftMost = vec.begin(), rightMost = vec.end() -1;
    unsigned int score[2] = {0};

    for (size_t k = 0; leftMost <= rightMost; k++)
    {
        if (*(leftMost) > *(rightMost))
        {
            score[k % 2] += *(leftMost);
            leftMost++;
        }
        else
        {
            score[k % 2] += *(rightMost);
            rightMost--;
        }
    }

    std::cout << score[0] << " " << score[1] << std::endl;

    return 0;
}
