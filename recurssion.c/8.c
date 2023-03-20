//printing the pattern
#include<stdio.h>
void pat(char *P)
{
	if(*P == '\0')
		return;
	printf("%s",P);
	printf("\n");
	pat(P+1);
}
int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s",str);
	
	pat(str);
	return 0;
}
