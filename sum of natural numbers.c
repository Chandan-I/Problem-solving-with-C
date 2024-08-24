#include<stdio.h>
int na(int);
int main(){
	int n,a;
	scanf("%d",&n);
	a=na(n);
	printf("sum of numbers is %d",a);
}
int na(int n){
	int i,s=0;
	for(i=1;i<=n;i++)
	s=s+i;
	return s;
}
