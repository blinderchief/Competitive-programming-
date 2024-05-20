#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)

bool check (ll k,vector<ll> &v , int n){
  vector<ll> bits(22,0);
  f(i,k){
    int j =0;
    int x =v[i];
    while(x>0) {
      if(x%2) bits[j]++;
      j++;
      x/=2;
    }
  }
  vector<ll> occ=bits;
  for(int i=k;i<n;i++){
    int j =0;
    int x = v[i];
    while(x>0){
      if(x%2) occ[j]++;
      j++;
      x/=2;
    }
    j=0;
    x= v[i-k];
    while(x>0){
      if(x%2){
        occ[j]--;
      }
      j++;
      x/=2;
    }
    f(i,22) {
      if(occ[i] >0 && bits[i] ==0) return false;
      if(occ[i] == 0 && bits[i] >0) return false;
    }
  }
  return true;

  }

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<ll> v(n);
  f(i,n){
    cin>>v[i];
  }
  ll low = 1; 
  ll high = n;
  ll res =n;
  while(low<=high){
    ll mid =(low+high)/2;
    if(check(mid,v,n)){
      high = mid-1;
      res = mid;
    }
    else{
      low = mid+1;
    }
  }
  cout<<res<<'\n';
  
}
return 0;
}


