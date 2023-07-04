#include<iostream>

int main(int argc, char const *argv[])
{
    short friendsNum, height;
    std::cin >> friendsNum >> height;

    short normal = 0, bend = 0;
    short heights;
    while (friendsNum--)
    {
        std::cin >> heights;
        if (heights > height)
        {
            bend++;
        }
        else
        {
            normal++;
        }
    }

    std::cout << normal + (2 * bend) <<std::endl;
    
    
    return 0;
}


/* Nedal's solution
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
  int n, h, a, ans = 0;
 
  cin >> n >> h;
 
  while (n--) {
    
    cin >> a;
 
    ans += 1 + (a > h);
 
  }
 
  cout << ans;
 
  return 0;
 
}
*/