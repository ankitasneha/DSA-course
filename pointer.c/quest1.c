//display array using pointer
#include<stdio.h>
int main()
{
    int a[5]= {5,4,6,8,9};
    int *p=a;
    int i;
     
    for(i=0; i<5; i++)
       printf("%d ",p[i]);
       p++;

    return 0;
}