#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  ll n; cin>>n;  
  ll twos=0, threes=0;
  while(n%2==0){
    twos++;
    n/=2;
  }
  while(n%3==0){
    threes++;
    n/=3;
  }
  if(n==1 && twos<=threes){
    cout<<2*threes - twos<<'\n';
  }
  else cout<<-1<<'\n';
}
return 0;
}