#include<iostream>

int main(int argc, char const* argv[])
{

    short squares[4];
    for (size_t i = 0; i < 4; i++)
    {
        std::cin >> squares[i];
    }

    std::string s;
    std::cin >> s;
    unsigned int calories = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '1':
            calories += squares[0];
            break;
        case '2':
            calories += squares[1];
            break;
        case '3':
            calories += squares[2];
            break;
        case '4':
            calories += squares[3];
            break;

        default:
            break;
        }

    }

    std::cout << calories << std::endl;

    return 0;
}


/*
nt a[4], len, ans = 0;
    string s;
 
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
 
    len = s.length();
 
    while (len--)
        ans += a[s[len] - '1'];
 
    cout << ans;

*/