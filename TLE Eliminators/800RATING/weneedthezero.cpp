#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
   int n; cin>>n;
  vector<ll> v(n);
  int ans=0;
  for(int i=0;i<n;i++){
    cin>>v[i];
    ans^=v[i];
  }
  if(n%2==0){
    if(ans==0){
      cout<<0<<'\n';
    }
    else{
      cout<<-1<<'\n';
    }
  }
  else{
    cout<<ans<<'\n';
  }

}
return 0;
}