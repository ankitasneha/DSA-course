//reverse the string
#include <stdio.h>
void revstring() 
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
    {
        revstring();
        printf("%c", c);
    }
}
int main() 
{
    printf("enter string: ");
    revstring();
    return 0;
}
