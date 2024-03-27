#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<ll> v(n),rs;
  for(ll i =0;i<n;i++){
    cin>>v[i];
  }
  rs.push_back(v[0]);
  for(ll i = 1; i<n;i++){
    if(v[i-1]>v[i]){
      rs.push_back(v[i]);
      rs.push_back(v[i]);
    }
    else{
      rs.push_back(v[i]);
    }
  }
  cout<<rs.size()<<'\n';
  for(ll i =0;i<rs.size();i++){
    cout<<rs[i]<<" ";
  }
  cout<<'\n';
}
return 0;
}