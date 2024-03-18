#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
    int n,l; cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
  
        double max_gap =a[0];
        for(int i=1;i<n;i++){
            double res = (a[i]-a[i-1])/2.0;
            if(res>max_gap){
                max_gap=res;
            }
        }
      max_gap = max(max_gap, (double)(l - a[n-1]));

        cout<<fixed<<setprecision(10)<<max_gap<<'\n';
    

}
