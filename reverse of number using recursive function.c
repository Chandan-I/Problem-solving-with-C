#include <stdio.h>
int rev(int);
int main()
{
    int num, reversed = 0;
    printf("Enter any number");
    scanf("%d", &num);
    reversed = rev(num);
    printf("Reverse of no. is %d", reversed);
}
int rev(int n)
{
    static int rev_n = 0;
    static int b=1;
    if(n != 0)
    {
        rev(n/10);
        rev_n += (n%10)*b;
        b*= 10;
    }
    return rev_n;
}
