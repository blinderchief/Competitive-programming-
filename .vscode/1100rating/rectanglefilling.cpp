#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f(i,n) for(int i =0;i<n;i++)

bool check(ll n, ll m,vector<vector<char>>&grid, ll ch){
    bool ok=false;
    f(i,n){
        if(grid[i][0]==ch){
            ok=true;
            break;
        }
    }
    if(!ok)return false;
    ok=false;
    f(i,n){
        if(grid[i][m-1]==ch){
            ok=true;
            break;
        }
    }
    if(!ok)return false;
    ok=false;
    f(j,m){
        if(grid[0][j]==ch){
            ok=true;
            break;
        }
    }
    if(!ok)return false;
    ok=false;
    f(j,m){
        if(grid[n-1][j]==ch){
            ok=true;
            break;
        }
    }
    if(!ok)return false;
    return true;
}

int main() {
int t; cin>>t;
while(t--){
 int n,m;
	cin>>n>>m;
	vector<vector<char>> a(n,vector<char>(m));
	for(int i =0;i<n;i++){
    string s; cin>>s;
		for(int j=0;i<m;j++){
			a[i][j]=s[j];
		}
	}
  bool res = check(n,m,a,'W') ||check(n,m,a,'B');
  if(res) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
}
return 0;
}