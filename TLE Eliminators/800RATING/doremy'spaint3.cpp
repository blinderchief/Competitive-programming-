#include<bits/stdc++.h>
using namespace std;
int main(){
  int tt; cin>>tt;
  while(tt--){
    int n; cin>>n;
    map<int,int> mp;
    vector<int> v;
    int x =0;
    for(int i=0;i<n;i++){
      cin>>x;
      mp[x]++;
    }
    if(mp.size()>=3) {
      cout<<"NO"<<'\n';
      continue;
      }

    if(mp.size()==1) 
    {
      cout<<"YES"<<'\n';
      continue;
      }
    for( auto it : mp) {
        v.push_back(it.second);
    }
    if(abs(v[0]-v[1])>=2)
      cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    }
  
    
  }
