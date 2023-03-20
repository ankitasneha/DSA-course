//func which will take 2 integer along with operator
#include<stdio.h>

int cal(int x, int y, char z)
{
	if (z == '+')
	{
		int s;
		s = x + y;
		return s;
	}
	else
	{
		int pro;
		pro = x * y;
		return pro;
	}
}


int main()
{
	char o;
	printf("Enter the operator: ");
	scanf("%c",&o);
	
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("The result is %d",cal(a,b,o));
	
	return 0;
}
