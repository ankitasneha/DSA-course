//reversing the array using pointer
#include<stdio.h>
int main()
{
    int a[5]= {5,4,6,8,9};
    int *p=a;
    int i,temp;
     
    for(i=0;i<5/2;i++)
    {
        temp=*(a+i);
        *(a+i)=*(a+5-1-i);
        *(a+5-1-i)=temp;
    
    }
    for(i=0; i<5; i++)
    {
       printf("%d ",*(a+i));
     
    }


    return 0;
}