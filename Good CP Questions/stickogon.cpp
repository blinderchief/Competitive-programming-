#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<int> v(n);
  for(int i =0;i<n;i++){
    cin>>v[i];
  }
  map<int,int> mp;
  for(int i =0;i<n;i++){
    mp[v[i]]++;
  }
  int cnt =0;
  for(auto x:mp){
    if(x.second > 2){
      
      cnt+=(x.second/3);
    }
  }
  cout<<cnt<<'\n';
}
return 0;
}

