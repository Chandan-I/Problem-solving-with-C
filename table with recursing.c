#include<stdio.h>
void table(int,int);
int main(){
	int n,i=1;
	printf("Enter which table you want?");
	scanf("%d",&n);
	table(n,i);
}
void table(int x,int i){
		printf("\n");
		printf("%d",x*i);
		if(i<10)
		return table(x,i+1);
}

