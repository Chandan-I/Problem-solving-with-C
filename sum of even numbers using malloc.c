#include<stdio.h>
#include<stdlib.h>
main(){
	int *ptr,n,sum=0,i;
	printf("Enter 'n' value.");
	scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
    	printf("Error! memory not allocated");
    	exit(0);
	}
	printf("Enter element:\n");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		if(*(ptr+i)%2==0)
	      sum+=*(ptr+i);
	}
	printf("Sum = %d",sum);
	free(ptr);
}
