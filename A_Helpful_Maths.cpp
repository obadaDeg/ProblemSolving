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

    string s;

    cin >> s;

    int ones = count(s.begin(), s.end(), '1');
    int twos = count(s.begin(), s.end(), '2');
    int threes = count(s.begin(), s.end(), '3');

    string result = "";
    for (int i = 0; i < ones; i++) {
        result += "1+";
    }
    for (int i = 0; i < twos; i++) {
        result += "2+";
    }
    for (int i = 0; i < threes; i++) {
        result += "3+";
    }

    result.pop_back();

    cout << result << endl;


    return 0;
}