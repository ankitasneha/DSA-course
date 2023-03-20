//printing the following pattern
#include<stdio.h>

void pat(int x, int f, char a)
{
	int i, j;
	for(i = 0 ; i < x ; i++)
	{
		for(j = 0 ; j < f ; j++)
			printf("%c",a);
		printf("\n");
	}
	return;
}
int main()
{
	pat(2,3,'-');
	printf("AB\n");
	pat(3,6,'=');
	printf("DF\n");
	pat(5,2,'*');
	
	return 0;	
}
