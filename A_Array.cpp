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

    vector<int> positive, negative, zero;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x > 0) {
            positive.push_back(x);
        } else if(x < 0) {
            negative.push_back(x);
        } else {
            zero.push_back(x);
        }
    }

    if(positive.empty()) {
        for (size_t i = 0; i < 2; i++)
        {
            positive.push_back(negative.back());
            negative.pop_back();
        }
    }

    if (negative.size() % 2 == 0) {
        zero.push_back(negative.back());
        negative.pop_back();
    }

    cout << negative.size() << " ";
    for (int x : negative) {
        cout << x << " ";
    }
    cout << endl;

    cout << positive.size() << " ";
    for (int x : positive) {
        cout << x << " ";
    }
    cout << endl;

    cout << zero.size() << " ";
    for (int x : zero) {
        cout << x << " ";
    }
    cout << endl;
    

    

    return 0;
}   