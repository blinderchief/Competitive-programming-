#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = v[0];
        for (int i = 1; i < n; ++i) {
            if (v[i] > ans) {
                ans = v[i];
            } else {
                ans = ((ans / v[i]) + 1) * v[i];
            }
        }
        cout<< ans<<endl;
    

    }
}


