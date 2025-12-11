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

    vector<pair<int, int>> a(n);

    for (auto &&i : a)
    {
        cin >> i.first >> i.second;
    }

    sort(a.begin(), a.end());

    for (size_t i = 0; i < n - 1; i++)
    {
        if(a[i].second > a[i + 1].second) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;
    
    

    return 0;
}