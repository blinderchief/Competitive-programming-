#include<stdio.h>
int print1_N(int l,int r){
	if(l>r) return 0;
	printf("%d ",l);
	print1_N(l+1,r);
}
int main(){
	int  L,R;
	scanf("%d %d",&L,&R);
	print1_N(L,R);
	return 0;
}

