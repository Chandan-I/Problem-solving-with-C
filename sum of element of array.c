#include <stdio.h>
int sum(int arr[], int x, int y);
int main()
{
    int arr[100];
    int N,i,s;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    s= sum(arr, 0, N);
    printf("Sum of array elements: %d",s);
    return 0;
}
int sum(int arr[], int x, int y) 
{
    if(x>=y)
        return 0;
    return (arr[x] + sum(arr,x + 1,y));
}
