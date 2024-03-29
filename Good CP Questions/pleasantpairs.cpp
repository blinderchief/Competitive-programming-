// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// int main() {
// int t; cin>>t;
// while(t--){
//   int n; cin>>n;
//   vector<int> v(n);
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }
//   int i=1;
//   int j=n;
//   int cnt=0;
//   while(i<j){
//     while(i<=j){
//     if(v[i-1]*v[j-1] == i+j) cnt++;
//     i++;
//     }
//    j--;

//   }
//   cout<<cnt<<'\n';

// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(v[i] * v[j] == i + j + 2) {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
