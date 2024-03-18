// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// int main(){
//   int t; cin>>t;
//   while(t--){
//     ll n,k; cin>>n>>k;
//     int x=0,y=0;
//     bool res=false;
//     while(x>0 && y<=9){
//       x = (n-(k*y));
//       if(x%2==0){
//         res =true;
//         break;
//       }
//       else{
//       y++;
//       }
//     }
//     if(res) cout<<"YES"<<'\n';
//     else cout<<"NO"<<'\n';


//   }
// }
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long int n, k; 
        cin >> n >> k;
        int y = 0;
        bool res = false;
        while (true) {
            long long int x = n - (k * y);
            if (x < 0) break; 
            if (x % 2 == 0) {
                res = true;
                break;
            }
            if(y>9) break;
            y++;
        }
        if (res) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
