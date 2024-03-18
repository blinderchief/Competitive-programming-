#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    int res=2;
    int temp=0;
    for(int i=0;i<n;i++){
      res = max(res,v[i]-temp);
      temp =v[i];
    }
    res = max(res,2*(x-v[n-1]));
    cout<<res<<'\n';
 }
}