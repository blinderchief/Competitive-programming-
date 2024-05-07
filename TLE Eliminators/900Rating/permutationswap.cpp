#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<int> v(n),res(n);
  for(int i =0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){
    int a = abs(v[i]-(i+1));
    if(a!=0){
      res.push_back(a);
    }
  }
  int ans =0;
  for(int i =0;i<res.size();i++){
   ans = hcf(ans,res[i]);
  }
  
 cout<<ans<<'\n';



}
return 0;
}