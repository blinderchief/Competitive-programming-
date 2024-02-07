#include<stdio.h>
 int fibonacii(int n){
 	if(n==1 || n==2) return n-1;
	 else
	 return  fibonacii(n-1) + fibonacii(n-2);
	
 }
 
int main(){
	int n;
	scanf("%d",&n);
    int res=fibonacii(n);
    printf("%d",res);
    
  
	return 0;
	
}