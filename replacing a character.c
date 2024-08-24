#include<stdio.h>
void main(){
	char a[100];
	fflush(stdin);
	printf("\nEnter string\n");
	scanf("%[^\n]%*c", a);
	printf("\nIn star(*)---->%s",strset(a,'*'));
}
