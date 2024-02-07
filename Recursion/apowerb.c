#include<stdio.h>
int power(int a, int b,int m){
    if(b==0) return 1;
    if(b==1) return a%m;
    int temp =power(a,b/2,m);
    if(b%2==1) 
    return temp*temp*a;
    else
    return temp*temp;
}

int main(){
int a,b,m;
scanf("%d %d %d",&a,&b,&m);
  long long res=power(a,b,m);
  printf("%lld",res);
  return 0;
}