#include <iostream>
#include <vector>
using namespace std;

bool isDefinitelyLying(const vector<int>& blame) {
    int n = blame.size();
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        
        vector<bool> in_cycle(n, false);
        int current = i;
        
        while (!visited[current]) {
            visited[current] = true;
            in_cycle[current] = true;
            int next = blame[current] - 1; 
            
            if (next == current) break;
            
            if (in_cycle[next]) return true;

            current = next;
        }
    }
    
    return false;
}

int main() {
    int T;
    cin >> T; 
    
    while (T--) {
        int n;
        cin >> n; // Length of the array
        vector<int> blame(n);

        for (int i = 0; i < n; i++) {
            cin >> blame[i];
        }

        if (isDefinitelyLying(blame)) {
            cout << "Definitely Lying" << endl;
        } else {
            cout << "Not Definitely Lying" << endl;
        }
    }

    return 0;
}
