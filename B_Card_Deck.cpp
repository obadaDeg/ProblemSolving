#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n + 1]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        a[n] = n + 1; 

        stack<int> s;
        int maxVal = a[0];  
        int last = 0;       

        for (int i = 0; i <= n; i++) {
            if (a[i] > maxVal) {  
                for (int j = i - 1; j >= last; j--) {
                    s.push(a[j]);
                }
                last = i;  
                maxVal = a[i];  
            }
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    return 0;
}
