#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  string s;
  cin>>s;
  int hr = stoi(s.substr(0,2)); // stoi convert string into a integer
  string minte = s.substr(3,2);
  string space =" AM\n";
  if(hr>11) space =" PM\n";
  if(hr==0 || hr==12) cout<<12<<":"<<minte<<space;
  else{
    if(hr%12<10) cout<<0<<hr%12<<":"<<minte<<space;
    else cout<<hr%12<<":"<<minte<<space;
  }
}
return 0;
}