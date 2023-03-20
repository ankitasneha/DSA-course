//sum of series using factorial
#include<stdio.h>

int fact(int x)
{
	int f = 1;
	while (x != 0)
	{
		f = f * x;
		x--;
	}
	return f;
}
int main()
{
	int n;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	
	int i, odd = 0, even = 0, factorial;
	
	for(i = 1 ; i <= n ; i += 2)
	{
		factorial = fact(i);
		odd += (1.0 / factorial);
	}
	for (i = 2 ; i <= n ; i += 2)
	{
		factorial = fact(i);
		even = factorial;
	}
	
	float s = odd + even;
	
	printf("The sum is %4.2f",s);
}
