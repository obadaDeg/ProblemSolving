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
using ll = long long;
using ull = unsigned long long;
using lld = long double;
#define GREETINGS_FROM_LOS_POCATOS \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;

int main()
{
    GREETINGS_FROM_LOS_POCATOS

    int n, B;
    cin >> n >> B;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> cutCosts;
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) even++;
        else odd++;

        if (i != n - 1 && odd == even) {
            cutCosts.push_back(abs(a[i+1] - a[i]));
        }
    }

    sort(cutCosts.begin(), cutCosts.end());

    int cuts = 0;
    int totalCost = 0;

    for (int cost : cutCosts) {
        if (totalCost + cost <= B) {
            totalCost += cost;
            cuts++;
        } else {
            break;
        }
    }

    cout << cuts << endl;

    return 0;
}