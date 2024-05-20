#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n,k; cin>>n>>k;
string s; cin>>s;
vector<char> v(k);
for(int i =0;i<k;i++){
  cin>>v[i];
}
map<char,int> mp;
for(int i =0;i<n;i++){
 mp[s[i]]++;
}
ll sum = 0;
for(int i =0;i<k;i++){
  int a = mp[v[i]] +1;
  sum+=a;
}

return 0;
}