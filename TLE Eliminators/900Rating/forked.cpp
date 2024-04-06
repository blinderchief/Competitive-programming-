#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
  ll a,b; cin>>a>>b;
  ll xk,yk; cin>>xk>>yk;
  ll xq,yq; cin>>xq>>yq;
  vector<pair<int,int>> dirn = {{a,b},{-a,b},{a,-b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
  set<pair<int,int>> s1,s2;
  for(auto i:dirn){
    ll x = xk + i.first;
    ll y = yk + i.second;
    s1.insert({x,y});
    x = xq+ i.first;
    y = yq + i.second;
    s2.insert({x,y});
  }
  int cnt=0;
  for(auto pos:s1){
    if(s2.find(pos) != s2.end()){
      cnt++;
    }
  }
  cout<<cnt<<'\n';
}
int main() {
int t; cin>>t;
while(t--){
solve();
}
return 0;
}