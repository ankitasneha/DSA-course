//adding by 2
#include<stdio.h>

int main()
{
    int a[5];
    printf("Enter the first element of the array:\n");
    scanf("%d",&a[0]);

    int *b=&a[0];

    int i;
    for(i=1;i<5;i++)
    {
        *(b+i)=*(b)+(2*i);
    }

    printf("The array is");

    for(i=0;i<5;i++)
    {
        printf(" %d",*(b+i));
    }

    return 0;
}