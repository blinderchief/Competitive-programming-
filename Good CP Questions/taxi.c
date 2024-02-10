#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	int a=0,b=0,c=0,d=0;
	int x; 
	while(t--){
		scanf("%d",&x);
	    switch(x){
		case 1: 
		a++;
		break;
		case 2: 
		b++;
		break;
		case 3:
		c++;
		break;
		case 4: 
		d++;
		break;
	}	
	}
	int taxi=0;
	
	taxi+=d;
	taxi+=c;
	a=a-c;
	if(a<0) a=0;
	
	if(b%2==0){
	  b/=2;
	  taxi+=b;
	}
	 else{
	 	b=b/2 + 1;
	 	taxi+=b;
	 	a=a-2;
	 	if(a<0) a=0;
	 }
	 a=ceil(a/4.0);
	 taxi+=a;
	 printf("%d",taxi);
	return 0;
}