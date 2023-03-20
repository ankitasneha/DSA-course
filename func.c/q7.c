//display series
#include<stdio.h>

void pattern(int n,char x)
{
	int i, j;
	
	for(i = n ; i >= 1 ; i--)
	{
		for(j = 0 ; j < i ; j++)
			printf("%c",x);
		printf("\n");
	}
	return;
}
int main()
{
	int r;
	char t;
	
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter any character: ");
	scanf(" %c",&t);
	pattern(r,t);
	return 0;
}
