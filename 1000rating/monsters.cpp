#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n,k; cin>>n>>k;
  vector<ll> a(n);
  vector<pair<ll,ll>> b;
  for(int i =0;i<n;i++){
    cin>>a[i];
    a[i]%=k;
    if(a[i]==0){
      a[i]+=k;
    }
    b.push_back({-a[i],i+1});
  }
  sort(b.begin(),b.end());
  for(auto i:b){
    cout<<i.second<<' ';
  }
  cout<<'\n';

}
return 0;
}