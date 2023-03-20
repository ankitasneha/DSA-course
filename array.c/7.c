#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,sum;
    int a[4][5];
    
     for(i=0;i<4;i++)
    {
        sum=0;
        for(j=0;j<5;j++) 
        {
           sum=sum+a[i][j];
           printf("%d ",sum);
        }

        printf("\n");
        
    }
    return 0;
}
