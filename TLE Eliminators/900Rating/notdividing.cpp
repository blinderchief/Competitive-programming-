#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
  int t; cin>>t;
  while(t--){
 int n; cin>>n;
  int arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
  arr[i]++;
  cout<<arr[i]<<" ";
}
cout<<'\n';
  }
 

}
int main() {
int t; cin>>t;

  solve();

return 0;
}