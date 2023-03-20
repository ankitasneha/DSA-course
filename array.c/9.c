#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,p,count;
    int a[4][4]=
    {
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };
    for(k=3;k>=0;k--)
    {
        j=0;
        for(i=k;i<=3;i++) 
        {
           printf("%d ",a[i][j]);
           j++;
        }
      
        printf("\n");
    }
    
    for(k=1;k<=3;k++)
    {
        i=0;
        for(j=k;j<=3;j++) 
        {
           printf("%d ",a[i][j]);
           i++;
        }
        count++;
        printf("\n");
    }

return 0;
}