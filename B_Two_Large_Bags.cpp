/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(int i = a; i < n; i++)
#define vll vector<ll>
#define vi vector<int>
#define pb push_back
#define po pop_back
#define me(a, x) memset(a, x, sizeof(a))
#define all(v) v.begin(), v.end()
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define sot(v) sort(all(v))
#define INF (int)1e18
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int test(stack<int> &st){
  int last = 0;
  int aa;
  while(!st.empty()){
          int aa = st.top();
          //cout << "new loop, a: " << aa << " sz: " << st.size() << " last: " << last << "\n";
          st.pop();
          if(st.top() == aa)
          {
                  if(st.top() == last){
                          int num = 2;
                          while (! st.empty()){
                                  if(st.top() == aa){
                                          num++;
                                          //cout << "a: " << st.top() << " n: " << num << "\n";
                                          st.pop();
                                  } else {
                                          while((num-1) > 0){
                                                  st.push(aa+1);
                                                  num--;
                                          }
                                          //cout << "sz: " << st.size();
                                          //cout << ", breaking.\n";
                                          break;
                                  }
                          }
                  } else {
                          last = st.top();
                          st.pop();
                  }
                  
                  
          } else if(aa == last)
          {
                  st.push(aa+1);
          } else 
          {
                  return 0;
          }
  }
  return 1; // stack empty
}

int main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      int n;
      cin >> n;
      vi a(n);
      stack<int> s;
      for(int i = 0; i<n; i++){
              cin >> a[i];
      }
      sort(a.rbegin(), a.rend());
      for(int j = 0; j<a.size(); j++){
              s.push(a[j]); 
      }
      a = {}; 
      if(test(s)){
              cout << "YES\n";
      } else {
              cout << "NO\n";
      }
    }
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
   //cout << "Time taken: " << elapsed.count() * 1e-9 << " seconds" << '\n';
    return 0;
}