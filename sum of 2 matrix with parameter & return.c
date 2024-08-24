#include<stdio.h>
int array(int,int);
int main(){
	int x,y,i,j,rea[10][10];
	printf("Enter order of matrix\n");  
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
    		rea[10][10]=array(i,j);
    		printf("%d",rea[i][j]);
		}
		printf("\n");
	}
       
}
int array(int m,int n){
	 int c, d, a[10][10], b[10][10], sum[10][10];    
    printf("Enter the elements of first matrix\n");  
    for(c = 0; c <= m; c++)  
        for(d = 0; d <= n; d++) 
		scanf("%d", & a[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for(c = 0; c <= m; c++)  
        for(d = 0; d <= n; d++) 
		scanf("%d", & b[c][d]);  
		   for(c = 0; c <= m; c++)  
        for(d = 0; d <= n; d++) 
	sum[c][d]=a[c][d]+b[c][d];
	return sum[c][d];  
}
