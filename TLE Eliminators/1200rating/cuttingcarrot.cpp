#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	
	ll n, h; cin>>n>>h;
	for(int i=1;i<=n-1;i++)
	{
		cout<<fixed<<setprecision(12)<<sqrt(double(i)/double(n))*double(h)<<" ";
	}	
	cout<<'\n';


return 0;
}