#include<stdio.h>
#include<string.h>
int main(){
	char *p;
	char ch[1000];
	int i,n;
	printf("Enter the string\n");
	gets(ch);
	n=strlen(ch);
	p=&ch[0];
	for(i=n-1;i>=0;i--){
		printf("%c",*(p+i));
	}
	return 0;
}
