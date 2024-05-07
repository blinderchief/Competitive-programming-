#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
 
 ll n,k;
 cin>>n>>k;
 
 map<ll,ll> mp;
 ll x,p=1;
 
 for(int i=0;i<n;i++){
     cin>>x;
     p*=x;
     p%=k;
     
     mp[x%k]++; 
 }
 
 if(p%k == 0) {
     cout<<"0\n";
     return;
 }
 
 if(k==2){
     cout<<1<<"\n";
     return;
 }
 if(k==3){
     if(mp[2])
        cout<<1<<"\n";
    else
        cout<<"2\n";
 }
 if(k==4){
     if(mp[3]) cout<<"1\n";
     else if(mp[2] && mp[1]) cout<<"1\n";
     else if(mp[2]) cout<<"2\n";
     else if(mp[1]>1) cout<<"2\n";
     else if(mp[1]) cout<<"3\n";
 }
 if(k==5){
     if(mp[4]) cout<<"1\n";
     else if(mp[3]) cout<<"2\n";
     else if(mp[2]) cout<<"3\n";
     else cout<<"4\n";
 }
     
}
 
int main(){
       
     
    ll t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}
