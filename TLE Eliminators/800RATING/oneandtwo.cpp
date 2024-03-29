#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  int n; cin>>n;
  vector<int> v(n);
  for(int i =0;i<n;i++){
    cin>>v[i];
  }
  int cnt=0;
  vector<int> res;
  for(int i =0;i<n;i++){
    if(v[i]==2) {
      cnt++;
      res.push_back(i+1);
    }
    
  }
  if(cnt==0){
    cout<<1<<'\n';
  }
  else if(cnt%2==0) {
    int size =res.size()/2;
    size--;
    cout<<res[size]<<'\n';
  }
  else{
    cout<<-1<<'\n';
  }

}

return 0;
}
