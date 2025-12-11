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

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    string result = "";
    int prev = 0;

    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (v[left] > prev && v[right] > prev)
        {
            if (v[left] < v[right])
            {
                result += 'L';
                prev = v[left];
                left++;
            }
            else
            {
                result += 'R';
                prev = v[right];
                right--;
            }
        }
        else if (v[left] > prev)
        {
            result += 'L';
            prev = v[left];
            left++;
        }
        else if (v[right] > prev)
        {
            result += 'R';
            prev = v[right];
            right--;
        }
        else
        {
            break;
        }
    }

    cout << result.size() << endl;
    cout << result << endl;

    return 0;
}