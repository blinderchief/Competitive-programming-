#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n,k;
  cin>>n>>k;
  vector<ll> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  int r = 1; int cnt = 1;
  for(int i =1;i<n;i++){
    if(a[i]-a[i-1] <= k) 
     cnt++;
    else
     cnt = 1;
    r = max(cnt,r);
  }
  cout<<n-r<<'\n';
}
return 0;
}