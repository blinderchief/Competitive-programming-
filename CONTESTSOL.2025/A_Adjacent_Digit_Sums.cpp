// /**
//  * writer:blinderchief
//  **/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i,a,n) for(int i = a; i < n; i++)
// #define vll vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define po pop_back
// #define me(a, x) memset(a, x, sizeof(a))
// #define all(v) v.begin(), v.end()
// #define no cout << "No" << '\n';
// #define yes cout << "Yes" << '\n';
// #define sot(v) sort(all(v))
// #define INF (int)1e18
// mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
// int main() {
//     auto begin = chrono::high_resolution_clock::now();
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int x,y; cin>>x>>y;
//         if(x==y) {
//           no
//           continue;
//         }
//         if(x+1==y ){
//          yes
//          continue;
//         }
//         if(x!=1 && y!=1){
//           if((x -y+ 1)%9 == 0){
//             yes
//           }
//           else no
//         }
//         else{
//           if(y!=1){
//               no
//           }
//           else if(x!=1){
//           if(x%9==0){
//             yes
//           }
//           else{
//             if((x -y+ 1)%9 == 0){
//               yes
//             }
//             else no
//           }
//           }
//         }
//     }
//     auto end = chrono::high_resolution_clock::now();
//     auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
//    //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
//     return 0;
// }


/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
           int x, y;
        cin >> x >> y;
        if (x == y) {
            cout << "No\n";
        } else if (y == 1) {
            if (x % 9 == 0) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else if (x + 1 == y) {
            cout << "Yes\n";
        } else if ((x - y + 1) % 9 == 0 && x - y + 1 > 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}
