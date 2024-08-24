#include<stdio.h>
main(){
	int a[50][50],b[50][50],d[50][50],c,r,i,j;
	int *p,*q;
	printf("Enter 1st matrix rows and columns.\n");
	scanf("%d%d",&r,&c);
	printf("Enter 1st matrix.\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter 2nd matrix.\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
}
p=&a[0][0];
q=&b[0][0];
printf("\nsum of matrices is:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
    *(p+i*c+j);
	*(q+j*c+j);
	d[i][j]=*p+*q;
	printf("%d ",d[i][j]);}
	printf("\n");
}
}

