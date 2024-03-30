#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  int a[n];
  for(int i =0 ;i<n;i++){
    cin>>a[i];
  }
  bool check =false;
  for(int i =0;i<n;i++){
    for(int j =i+1;j<n;j++){
      if(__gcd(a[j],a[i])<=2){
         check =true;
         break;
      }
    }
  }
  if(check) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';


  
}
return 0;
}