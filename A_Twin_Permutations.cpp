// // #include <iostream>
// // #include <vector>
// // #include <set>
// // int main(int argc, char const *argv[])
// // {
// //     short test;
// //     std::cin >> test;
// //     while (test--)
// //     {
// //         short n;
// //         std::cin >> n;
// //         std::vector<int> a;
// //         std::vector<int> b;
// //         std::set<int> set;
// //         for (size_t i = 0; i < n; i++)
// //         {
// //             unsigned short element;
// //             std::cin >> element;
// //             a.push_back(element);
// //             set.insert(element);
// //         }

// //         for (size_t i = 0; i < n; i++)
// //         {
// //             if (i == 0)
// //             {
// //                 b.push_back(a[i]);
// //                 continue;
// //             }

// //             if (a[i] + *set.begin() > b[i - 1])
// //             {
// //                 b.push_back(*set.begin());
// //                 set.erase(b[i]);
// //             }
// //             else
// //             {
// //                 for (size_t j = 0; j < set.size(); j++)
// //                 {
// //                     if (a[i] + *(set.begin() + 1) > b[i - 1])
// //                     {
// //                         b.push_back(*set.begin());
// //                         set.erase(b[i]);
// //                     }
// //                 }
                
// //             }
// //         }

// //         for (size_t i = 0; i < n; i++)
// //         {
// //             std::cout << b.at(i) << " ";
// //         }

// //         std::cout << std::endl;
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>

// int main() {
//     int testCases;
//     std::cin >> testCases;

//     while (testCases--) {
//         int n;
//         std::cin >> n;

//         std::vector<int> a(n), b(n);

//         for (int i = 0; i < n; ++i) {
//             std::cin >> a[i];
//         }

//         // Constructing permutation b based on permutation a
//         for (int i = 0; i < n; ++i) {
//             b[i] = i + 1; // Initialize b with 1 to n

//             if (i > 0 && b[i] <= b[i - 1]) {
//                 // Swap b[i] and b[i-1] if the condition a[i] + b[i] <= a[i-1] + b[i-1] is not satisfied
//                 std::swap(b[i], b[i - 1]);
//             }
//         }

//         // Printing permutation b
//         for (int i = 0; i < n; ++i) {
//             std::cout << b[i] << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        int a;
        cin>>a;
        cout<<a<<endl;
        return;
    }
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
        int c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<(n-1);i++)
        if(v[i]=(v[i+1]-1)){
        cout<<v[i]<<" ";
        c++;
        }
        else
            break;
            if(c==(n-1))
                cout<<n;
    cout<<endl;
}
int main()
{
//    freopen("input.txt", "r",stdin);
//    freopen("output.txt", "w", stdout);
    VAMOOOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}