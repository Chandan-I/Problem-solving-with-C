#include<stdio.h>
main(){
	int a,b,*x,*y;
	printf("Enter a value.\n");
	scanf("%d",&a);
	printf("Enter b value.\n");
	scanf("%d",&b);
	x=&a; y=&b;
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("a value after swapping is===>%d\n",*x);
	printf("b value after swapping is===>%d",*y);
}
