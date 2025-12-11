#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to calculate gcd (Greatest Common Divisor)
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate lcm (Least Common Multiple)
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

// Function to find the minimum subset that gives the maximum LCM
void solveTestCase() {
    int N;
    cin >> N;
    vector<long long> arr(N);
    
    // Read the array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Step 1: Calculate the maximum LCM possible from the array
    long long maxLCM = 1;
    for (int i = 0; i < N; i++) {
        maxLCM = lcm(maxLCM, arr[i]);
    }

    // Step 2: Try to find the minimum number of elements that can give this LCM
    long long currentLCM;
    int minElements = N;

    for (int mask = 1; mask < (1 << N); mask++) {
        currentLCM = 1;
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                currentLCM = lcm(currentLCM, arr[i]);
                count++;
            }
        }

        if (currentLCM == maxLCM) {
            minElements = min(minElements, count);
        }
    }

    // Output the result
    cout << minElements << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        solveTestCase();
    }

    return 0;
}
