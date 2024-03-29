// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// int main() {
// int t; cin>>t;
// while(t--){
//   ll n; cin>>n;
//   if(n<=10) {
//   cout<<n<<'\n';
//   }
//   else if(n>10 && n<=100){
//     int a =(n/10)-1;
//     int b =10 + a;
//     cout<<b<<'\n';
//   } 
//   else if(n>100 && n<=1000) {
//     int a = (n/100)-1;
//     int b =19+a;
//     cout<<b<<'\n';
//   }
//   else{
//       int a =(n/1000)-1;
//       int b = a+28;
//       cout<<b<<'\n';
//     }
// }
// return 0;
// }
 
 //in the above question there is some mistake that i am not figuring out 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
ll t; cin>>t;
vector<int> v;
for(int i=1;i<=100000;i*=10){
  for(int j =1;j<=9;j++){
    v.push_back(i*j);
  }
}
while(t--){
  int n; cin>>n;
  int res=0;
  for(auto y:v){
    if(y<=n) res++;
    else {
    break;
    }
  }
  cout<<res<<endl;
}
return 0;
}