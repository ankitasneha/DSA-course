//display each digit
#include <stdio.h>
void display(int a)
{
	int t;
	if (a==0) 
    {
		return;
	}
	t=a%10;
	display(a/10);
	printf("%d\n", t);
}
int main()
{
	int num;
    printf("enter number:");
    scanf("%d",&num);
	display(num);
	return 0;
}
