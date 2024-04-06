#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
  ll t; cin>>t;
  vector<int> v(t);
  for(int i =0;i<t;i++){
    cin>>v[i];
  }
  for(int i=0;i<t;i++){
    v[i]=abs(v[i]);
  }
  auto mi = min_element(v.begin(),v.end());
  cout<<*mi<<'\n';
return 0;
}