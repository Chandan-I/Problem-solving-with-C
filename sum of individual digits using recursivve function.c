#include<stdio.h>
int sum();	
int main(){
	int n,s;
	printf("Enter n value:");
	scanf("%d",&n);
	s=sum(n);
	printf("sum of digits is %d",s);
}
int sum(int a){
	if(a!=0)
	return a%10+sum(a/10);
	else
	return 0;
}
