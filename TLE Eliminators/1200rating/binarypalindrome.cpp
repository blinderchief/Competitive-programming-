// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int 

// string to_binary(ll num){
//     if(num==0){
//         return "0";
//     }
//     string s = "";
//     while(num!=0){
//         s+=('0' + num%2);
//         num/=2;
//     }
//     return s;
// }
 
// ll get_value(string s){
//     ll ans = 0;
//     for(ll i=0;i<s.length();i++){
//         if(s[i]=='1'){
//             ans+=(1LL<<i);
//         }
//     }
//     return ans;
// }
 
// signed main()
// {
    
//     set<ll> store = {0,1};
//     for(ll num=0;num<(1<<15);num++){
//         string now = to_binary(num);
//         string rev = now;
//         reverse(now.begin(),now.end());
//         // making even length palindrome
//         string curr = now + rev;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
 
//         curr = rev + now;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
 
//         // making odd length palindrome
//         curr = now + "1" + rev;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
 
//         curr = now + "0" + rev;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
 
//         curr = rev + "1" + now;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
 
//         curr = rev + "0" + now;
//         if(curr.back()=='1'){
//             store.insert(get_value(curr));
//         }
//     }
 
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll ans = LONG_LONG_MAX;
//         auto itr = store.upper_bound(n);
//         if(itr!=store.end()){
//             ans = min(ans,(ll)abs(n-(*itr)));
//         }
//         if(itr!=store.begin()){
//             itr--;
//             ans = min(ans,(ll)abs(n-(*itr)));
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }



