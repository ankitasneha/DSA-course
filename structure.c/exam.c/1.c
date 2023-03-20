//5631723=56,172
#include <stdio.h>
#define m 100
void printDigit(long n, int a)
{

    int arr[m];
    int i = 0;
    int j, r;
    while (n != 0)
    {

        r = n % 10;
        arr[i] = r;
        i++;

        n = n / 10;
    }
    for (j = i - 1; j > -1; j--)
    {
        if (arr[j] != a)
        {
            printf("%d", arr[j]);
        }
        else
        {
            printf(", ");
        }
    }
}

int main()
{
    long f;
    int c;
    printf("Enter a number");
    scanf("%d", &f);
    printf("Enter a single digit number (0 to 9) ");
    scanf("%d", &c);
    if (c >= 0 && c <= 9)
    {
        printDigit(f, c);
    }
    
    return 0;
}