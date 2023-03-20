#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,p,count;
    int a[4][4]=
    {
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };
    for(k=0;k<=3;k++)
    {
        for(i=k;i>=0;i--) 
        {
           printf("%d ",a[i][k-i]);
        }
        printf("\n");
    }
    count=4;
    for(k=3;k>=1;k--)
    {
        i=3;
        for(p=1;p<=k;p++) 
        {
           printf("%d ",a[i][count-i]);
           i--;
        }
        count++;
        printf("\n");
    }
    
    

    return 0;
}

