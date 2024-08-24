#include<stdio.h>
main(){
	int *w;
	float *x;
	char *y;
	double *d;
	long int *u;
	long long int *z;
	printf("size of integer is %d\n",sizeof(*w));
	printf("size of float is %d\n",sizeof(*x));
	printf("size of character is %d\n",sizeof(*y));
	printf("size of double is %d\n",sizeof(*d));
	printf("size of long long int is %d\n",sizeof(*z));
	printf("size of long int is %d",sizeof(*u));
}
