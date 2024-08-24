#include<stdio.h>
main(){
	int n,i,a;
	scanf("%d",&n);
	for(i=1; i<=10;i++){
		a=i*n;
		printf("\n%d*%d=%d",n,i,a);
	}
}
