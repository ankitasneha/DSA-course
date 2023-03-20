//gcd of two numbers
#include <stdio.h>
int main()
{
    int n1,n2,i,gcd;
    printf("enter 1st number:\n");
    scanf("%d", &n1);
    printf("enter 2nd number:\n");
    scanf("%d",&n2);
    for(i = 1; i <=n1&& i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    printf("GCD of entered numbers: %d", gcd);
    return 0;
}