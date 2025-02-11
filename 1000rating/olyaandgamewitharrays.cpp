#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n;cin>>n;
  int m;
  vector<vector<ll>> v(n);
  for(int i=0;i<n;i++){
    int m; cin>>m;
    v[i].resize(m); 
    for(int j =0;i<m;j++){
      cin>>v[i][j];
    }
  }
  
  
  
}
return 0;
}