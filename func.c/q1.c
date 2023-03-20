//find the average
#include<stdio.h>

float avg(int x, int y, int z)
{
	float a;
	a = (x + y + z) / 3;
	return a;
}
int main()
{
	int a, b, c;
	printf("Enter three values: ");
	scanf("%d %d %d",&a,&b,&c);
	
	float res;
	res = avg(a,b,c);
	
	printf("The average of %d, %d and %d is %4.2f",a,b,c,res);
	
	return 0;
}