#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int steps=0;
        for(int i=n-2;i>=0;i--)
        {
            while(v[i]!=0&&v[i]>=v[i+1])
            {
                v[i]/=2;
                steps++;
            }
            if(v[i]>=v[i+1])
            {
                steps=-1;
                break;
            }
        }
        cout<<steps<<"\n";
    }
}


int main() {
    solve();
    
}
