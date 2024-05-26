// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,n) for(int i =0;i<n;i++)

// bool customComparator(const pair<int, int> &a, const pair<int, int> &b) {
//     if (a.second != b.second) {
//         return a.second < b.second;
//     } else {
//         return a.first >b.first;
//     }
// }

// signed main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, p;
//         cin >> n >> p;
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i].first;
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> v[i].second;
//         }

//         if(n==1) {
//           cout<<p<<'\n';
//           continue;
//         }
//       sort(v.begin(), v.end(), customComparator);
//         int cnt = 0;
//         ll total_n = n;
//         int i = 0;
//         int check =0;
//       while(total_n>0&&i>0){
//         cnt+=p; total_n-=1;
//         if(total_n>0){
//             cnt+=(v[i].first*v[i].second);
//         total_n-=v[i].first;
//         }
//         if(total_n>0){
//             i++;
//             if(v[i].first>v[i-1].first){
//                while(v[i-1].first>0){
//                     cnt+=v[i].second;
//                     total_n-=v[i].first;
//                     v[i-1].first--;
//                }
//                v[i].first-=v[i-1].first;
//             }
//             else{
//                 i++;
//                 while(v[i].first>0){
//                     cnt+=v[i].second;
//                     total_n-=v[i].first;
//                     v[i].first--;

//                 }
//                 i++;
//             }
//         }
//       }
//         cout << cnt << '\n';
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int 
// #define f(i,n) for(int i = 0; i < n; i++)

// bool customComparator(const pair<int, int> &a, const pair<int, int> &b) {
//     if (a.second != b.second) {
//         return a.second < b.second;
//     } else {
//         return a.first > b.first;
//     }
// }

// signed main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         ll n, p;
//         cin >> n >> p;
//         vector<pair<int, int>> v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i].first;
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> v[i].second;
//         }
//         map<int,ll> mp;
//         mp[p] = n+5;
        
//         if (n == 1) {
//             cout << p << '\n';
//             continue;
//         }

//         sort(v.begin(), v.end(), customComparator);
        
//         ll cnt = 0;
//         for(int i=0;i<n;i++){
//             int mn = mp.begin()->second;
//             cnt+=mn;
//             mp[mn]--;
//             mp[v[i].first] += v[i].second;
//             mp[mn]--;
//             if(mp[mn==0]) mp.erase(mn);
//         }       

//         cout << cnt << '\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main(){
    int t;
    cin>>t;
    while(t--){
     int n,p;
    cin>>n>>p;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i].second;
    for(int i=0;i<n;i++)cin>>vec[i].first;
    sort(vec.begin(),vec.end());
    int cost=p;
    int distributed=1;
    for(auto &i:vec){
        int f=i.first;
        int s=i.second;
        if(f>p)break;
        cost+=(f*min(s,n-distributed));
        distributed+=(min(s,n-distributed));
    }
    cost+=((n-distributed)*p);
    cout<<cost<<endl;
}
    
    return 0;
}



