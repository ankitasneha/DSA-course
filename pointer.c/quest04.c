//2D array using pointer forward and reverse
#include<stdio.h>
int main()
{
    
    int a[4][4]=
    {
        {1,2,3,4},
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16}

    };
    int *p=&a[0][0];
    int i;
     printf("The array in forward order is\n");
    for(i=0; i<16; i++)
    {
       printf("%d ",*(p+i));
      
    }
    printf("\n");
     printf("The array in reverse order is\n");
    for(i=15;i>=0;i--)
   {
       printf("%d ",p[i]);
       
   }
   printf("\n");
   

      

    return 0;
}