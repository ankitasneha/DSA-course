#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[100];
    int i,count=0;
    printf("Enter the String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    count++;
    printf("length of string is %d\n",count);
    return 0;
}
