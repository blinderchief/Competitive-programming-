#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  string s;
  cin>>s;
  if (n==2 && s=="00") {
  cout<<"YES"<<'\n';
  continue;
  }
  if(n==2){
   cout<<"NO"<<'\n'; 
   continue;
  }
  if(n==1 && s=="0") {
   cout<<"YES"<<'\n';
    continue;
    }
  if(n==1) {
  cout<<"NO"<<'\n'; 
  continue;
  }

  vector<int> v;

  int cnt = 0; 
  for(int i=0;i<s.size();++i){
    if(s[i]=='1')  {cnt++;
    v.push_back(i);
    }
  }
  if(cnt==2 && v[0]==v[1]-1){
   cout<<"NO"<<'\n'; continue;
  }
  else if(cnt%2==0) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
  
}
return 0;
}