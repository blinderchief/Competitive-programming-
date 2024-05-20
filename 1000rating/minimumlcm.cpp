#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
// lcm(a,b) = |a*b|/ GCD(a,b)

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

ll lcm(int a, int b) {
    return (a / __gcd(a,b)) * b; // Note: (a / gcd(a, b)) * b is used to avoid overflow
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  ll n; cin>>n;
  vector<pair<ll,ll>> v;
  for(ll i =1, j=n-1; i<=j;i++,j--){
   v.push_back(make_pair(lcm(i,j),i));
  }
  sort(v.begin(),v.end());
  ll ans_prep = n- v[0].second;
  cout<<v[0].second<<' '<<ans_prep<<'\n';
}
return 0;
}
// time limit exceeded of above code


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
    int n;
    cin >> n;
    int chek = 1;
    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0) {
        chek = n / i;
        break;
      }
    }
    cout << chek << ' ' << n - chek << '\n';

}
return 0;
}