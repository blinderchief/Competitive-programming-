#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
  // ios_base::sync_with_stdio(false);
  //   cin.tie(0);
int t; cin>>t;
while(t--){
  int n,k; cin>>n>>k;
   vector<int> v(n);
   for(int i=0; i<n;i++){
    cin>>v[i];
   }
   auto it = find(v.begin(), v.end(), k);
   if(it != v.end()) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';

}
return 0;
}