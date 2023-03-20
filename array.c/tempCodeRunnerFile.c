#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][4];    
    int i,j,x=1;
    
    for(j=3;j>=0;j--)
    {
         for(i=2;i>=0;i--)
         {
             a[i][j]=x++;
         }
        }
         
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");

    }

    return 0;
}
