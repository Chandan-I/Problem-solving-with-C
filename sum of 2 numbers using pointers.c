#include<stdio.h>
main(){
	int a,b,*x,*y,sum;
	printf("Enter a value.");
	scanf("%d",&a);
	printf("Enter b value.");
	scanf("%d",&b);
	x=&a; y=&b;
	sum=*x+*y;
	printf("Sum of two numbers is===>%d",sum);
}
