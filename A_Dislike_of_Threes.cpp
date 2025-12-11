#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <climits>
#include <cstring>
using ll= long long;
using ull= unsigned long long;
using lld= long double;
#define GREETINGS_FROM_LOS_POCATOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    GREETINGS_FROM_LOS_POCATOS
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int cnt = 1, current = 1;
        while(cnt < x) {
            current++;
            if(current % 3 == 0 || current % 10 == 3) {
                continue;
            }
            cnt++;

        }

        cout << current << endl;   
        
    }
    
    return 0;
}