#include<stdio.h>
#include<stdlib.h>
main(){
	int *ptr,n,i,min,max;
	printf("Enter number of subjects.");
	scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
    	printf("Error! memory not allocated");
    	exit(0);
	}
	printf("Enter Marks:\n");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	min=*(ptr);
	max=*(ptr);
	printf("Entered marks are:\n");
		for(i=0;i<n;i++){
			if(max<*(ptr+i))
		max=*(ptr+i);
		if(min>*(ptr+i))
		min=*(ptr+i);
		printf("%d\n",*(ptr+i));
	}
	printf("maximum marks is=%d\n",max);
	printf("minimum marks is=%d",min);
	free(ptr);
}
