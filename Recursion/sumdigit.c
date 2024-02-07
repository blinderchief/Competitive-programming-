#include<stdio.h>
int sum_digit(int n){
    if(n<9 || n==0) return n;
    return n%10 + sum_digit(n/10);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int res=sum_digit(n);
    printf("%d",res);
    return 0;
    }

