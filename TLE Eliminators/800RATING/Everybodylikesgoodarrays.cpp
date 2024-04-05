#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<ll> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int cnt=0;
  for(int i =0;i<n-1;i++){
    if(v[i]%2==0 && v[i+1]%2==0 || v[i]%2==1 && v[i+1]%2==1){
      cnt++;
    }
  }
  cout<<cnt<<'\n';
}
return 0;
}