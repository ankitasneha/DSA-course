//fibonnaci series
#include<stdio.h>

void fibonacci(int x)
{
	int a = 1, b = 1, c, i;
	
	if (x == 1)
		printf("%d ",a);
	else if (x == 2)
		printf("%d %d",a,b);
	else
	{
		printf("%d %d ",a,b);
		for (i = 0 ; i < (x - 2) ; i++)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%d ",c);
		}
	}
	return;
}
int main()
{
	int n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	
	printf("The Fibonacci series upto %d terms is:",n);
	printf("\n");
	fibonacci(n);
	
	return 0;
}
