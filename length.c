#include<stdio.h>
int length(char *str){
    if(*str=='\0') return 0;
    return 1+length(str+1);
}
int main(){
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int res=length(str);
    printf("%d",res);
    return 0;
}