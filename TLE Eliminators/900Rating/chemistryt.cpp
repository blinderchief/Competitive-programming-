#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n,k; cin>>n>>k;
  string s;
  cin>>s;
  map<char,int> mp;
  for(int i =0;i<s.size();i++){
    mp[s[i]]++;
  }
  int odds=0;
  for(auto it:mp){
    int times = it.second;
    if(times%2==1) odds++;
  }
  if(k<odds-1) cout<<"NO"<<'\n';
  else cout<<"YEs"<<'\n';
  }
return 0;
}