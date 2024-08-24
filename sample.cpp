#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
//	scanf("%[^\n]%*c",a);
//	scanf("%[^\n]%*c",b);
	scanf("%s",&a);
	scanf("%s",&b);
	if(strcmp(a,b)==0)
	{
		printf("\n a,b are equal...");
	}
	else
	{
		printf("\n a,b are not equal.");
	}
}
