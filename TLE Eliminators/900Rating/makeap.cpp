#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
int t; cin>>t;
while(t--){
  ll a,b,c; cin>>a>>b>>c;
  	bool check = false;
 
	if((2*b-c)%a == 0)
		if( (2*b-c)/a > 0){
			check = true;
		}
 
	if((c+a)%(2*b) == 0){
		check = true;
	}
 
	if((2*b-a)%c == 0){
		if((2*b - a)/c > 0){
		check = true;
		}
	}
	if(a == b && b==c)
		check = true;
 
	if(check)cout<<"Yes"<<'\n';
	else cout<<"No"<<'\n';


}
return 0;
}



