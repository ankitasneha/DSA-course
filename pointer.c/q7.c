//1st and 2nd element using 3rd element
#include<stdio.h>

int main()
{
    int a[5];

    int *b=&a[0];
    b=b+2;

    *b=8;

    
    printf("The value of the 3rd element of the array is set as %d\n\n",*b);

    int i;

    for(i=1;i<=2;i++)
    {
        *(b-i)=*(b)-(2*i);
    }

    printf("The first,second and third elements of the array are");

    b=&a[0];

    for(i=0;i<3;i++)
    {
        printf(" %d",*(b+i));
    }

    return 0;

}