#include <iostream>
#include<set>

void solve()
{
    unsigned short n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::set<std::string> set;
    for (size_t i = 0; i < n-1; i++)
    {
        set.insert(s.substr(i,2));
    }
    std::cout << set.size() << std::endl;
}

int main(int argc, char const *argv[])
{
    unsigned short teat;
    std::cin >> teat;

    while (teat--)
    {
        solve();
    }

    return 0;
}
