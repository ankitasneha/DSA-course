//displaying from 2nd character
#include<stdio.h>

int main()
{
    char a[50];
    int l;

    printf("Enter string:\n");
    scanf("%s",a);
    printf("The entered string is: %s \n", a);

    char *b;
    b = a;

    for (l = 0; a[l] != '\0'; l++);

    for(int i = 0; i < l; i++){
        printf("%c ", *++b);
    }

    return 0;
}