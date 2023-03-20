//digits in reverse order
#include <stdio.h>
void reverse(int num)
{
    int f;
    if(num)
    {
        f=num%10;
        printf("%d ",f);
        num=num/10;
        reverse(num);
    }
    else
    {
        return;
    }
}
void main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("\nin reverse order:\n");
    reverse(n);
}