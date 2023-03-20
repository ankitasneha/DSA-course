#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,p,count;
    int a[5][5]=
    {
        {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}
    };
    for(k=1;k>=0;k--)
    {
        i=0;
        for(j=0;j<=k;j++)
        printf(" ");
        i++;
    }
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