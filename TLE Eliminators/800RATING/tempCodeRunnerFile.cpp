#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,len_max;
    cin>>n>>len_max;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    if(len_max==1) {
      if(is_sorted(v.begin(),v.end()))
        cout<<"YES"<<'\n';
      else{
        cout<<"NO"<<'\n';
      }
      }
    
    else{
      cout<<"YES"<<'\n';
    }
  }
}