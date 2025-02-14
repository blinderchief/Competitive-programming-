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
      int n; cin >> n;
      int ans = 12;
      for(int i = 0; i <= 10; i++) {
        int x = n - i;
        int mi = 7;
        while(x) {
           int digit = x % 10;
           if(digit <= 7) {
               mi = min(7 - digit, mi);
           }
           x /= 10;
        }
        if(mi <= i){
           ans = i;
           break;
        }
      }
      cout << ans << endl;
   }

   // 1012 + 9 => 1021 => 1030 + 9 > 1039 + 9 => 1048
   // 10 ^ 1 - 1
    
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}

