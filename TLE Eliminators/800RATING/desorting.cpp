#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t; cin>>t;
while(t--){
  int n; cin>>n;
  ll arr[n];
  for(ll i =0 ;i<n;i++){
    cin>>arr[i];
  }
  if(is_sorted(arr,arr+n)){
    ll diff = INT_MAX;
    for(int i =0;i<n-1;i++){
        diff = min(diff,arr[i+1]-arr[i]);
    }
    int res = diff/2 +1;
    cout<<res<<'\n';
  }
  else{
    cout<<"0"<<'\n';
  }
}
return 0;
}