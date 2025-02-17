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
      int n;
      cin>>n;
      vector<int> a(n), freq(n+1, 0);
      f(i,0,n){
          cin>>a[i];
          freq[a[i]]++;
      }
      int l=-1, r=-2, c=0;
      f(i,0,n){
          if(freq[a[i]]==1) {
              c++;
          }
          else if(c) {
              if(c > r-l+1) {
                  l = i-c+1;
                  r = i;
              }
              c=0;
          }
      }
      if(c) {
          if(c > r-l+1) {
              l = n-c+1;
              r = n;
          }
      }
      if(l==-1) {
          cout<<"0\n";
      }
      else cout<<l<<' '<<r<<'\n';
  
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}