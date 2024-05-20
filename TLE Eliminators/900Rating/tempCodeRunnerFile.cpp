#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
  int t; cin>>t;
  while(t--){
 int n; cin>>n;
  ll arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
if(arr[i+1]%arr[i]==0){
  while(arr[i+1]%arr[i]==0){
      arr[i+1]++;
  if(arr[i+1]%arr[i]==0){
    arr[i]++;
  }
  }
}
}
for(int i =0;i<n;i++){
  cout<<arr[i]<<' ';
}
cout<<'\n';
  }
 

}
int main() {
solve();


return 0;
}