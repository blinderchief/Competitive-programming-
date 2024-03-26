#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t; cin>>t;
  while(t--){
    int n,m; cin>>n>>m;
    string x,s;
    cin>>x>>s;
    bool check = true;
    for(int i =0;i<=5;i++){
        if(x.find(s) != string::npos){
          cout<<i<<'\n';
          check = false;
          break;
        }
        x.append(x);
    }
    if(check) cout<<-1<<"\n";
  }
}
