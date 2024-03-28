#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  int arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int cnt= 0;
  int res =0;
  for(int i = 0;i<n;i++){
    if(arr[i]==0){
      res++;
    }
    if(arr[i]==1){
      cnt = max(cnt,res);
      res = 0;
    }
  }
  cout<<max(cnt,res)<<'\n';

}
return 0;
}