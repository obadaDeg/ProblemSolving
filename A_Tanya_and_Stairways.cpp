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

    int n;
    cin >> n;

    // int prev = 0;
    // vector<int> stairs;

    // for (size_t i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     if(x < prev) {
    //         stairs.push_back(prev);
    //         prev = x;
    //     }
    // }

    // for(auto&& x : stairs) {
    //     cout << x << " ";
    // }

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> stairs;
    for (size_t i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            stairs.push_back(a[i - 1]);
        }        
    }

    stairs.push_back(a[n - 1]);

    cout << stairs.size() << endl;
    for (auto &&i : stairs)
    {
        cout << i << " ";
    }
    
    
    
    return 0;
}