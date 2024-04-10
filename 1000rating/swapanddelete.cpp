#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  string s; cin>>s;
  int cnt1 = 0;
  int cnt2 = 0;
  for(int  i= 0;i<s.size();i++){
    if(s[i]=='0') cnt1++;
    if(s[i]=='1') cnt2++;
  }
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      if(cnt2){
        cnt2--;
      }
      else{
        break;
      }
    }
    else{
      if(cnt1){
        cnt1--;
      }
      else{
        break;
      }
    }
  }
  cout<<cnt1 + cnt2<<'\n';


}
return 0;
}