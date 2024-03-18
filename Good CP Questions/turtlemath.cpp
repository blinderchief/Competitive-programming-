#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n];
            for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    } 
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]%3]++;
    }
    if(sum%3==0) cout<<0<<endl;
     else if(sum%3==2){
        cout<<1<<endl;
    }
    else{
        if(m[1]>0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    
        
            
               
                
    }



    }
