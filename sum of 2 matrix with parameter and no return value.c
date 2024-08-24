#include<stdio.h>
void array(int,int);
int main(){
	int x,y;
	printf("Enter order of matrix\n");  
    scanf("%d%d",&x,&y);
        array(x,y);
}
void array(int m,int n){
	 int c, d, first[10][10], second[10][10], sum[10][10];    
    printf("Enter the elements of first matrix\n");  
    for(c = 0; c < m; c++)  
        for(d = 0; d < n; d++) 
		scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for(c = 0; c < m; c++)  
        for(d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Sum of entered matrices:-\n");  
    for(c = 0; c < m; c++)  
    {  
        for(d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");  
}
}
