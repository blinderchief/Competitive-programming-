#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() {
  ios::sync_with_stdio(false);
    cin.tie(0);
int t; cin>>t;
while(t--){
   ll n,b;
        cin>>n;
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
        }
        if(n%2 == 0) {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
        return 0;
  
}

