#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int n,m; cin>>n>>m;
int to_check = min(n,m);
if(to_check%2==0) cout<<"Malvika"<<'\n';
else cout<<"Akshat"<<'\n';
return 0;
}