//maximum among three numbers
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    int *p1, *p2, *p3;
    printf("Enter First Number: ");
    scanf("%d",&n1);
    printf("Enter Second Number: ");
    scanf("%d",&n2);
    printf("Enter Third Number: ");
    scanf("%d",&n3);
    p1 = &n1;
    p2 = &n2;
    p3 = &n3;
    if(*p1 > *p2)
    {
	if(*p1 > *p3)
	{
		printf("%d is the largest number", *p1);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    else
    {
	if(*p2 > *p3)
	{
		printf("%d is the largest number", *p2);
	}
	else
	{
		printf("%d is the largest number", *p3);
	}
    }
    return 0;
}