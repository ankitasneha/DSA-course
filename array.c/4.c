#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][4];    
    int i,j,turn=0,x=1;
    
    for(i=2;i>=0;i--)
    {
        if(turn==0) 
        {
         for(j=3;j>=0;j--)
         {
             a[i][j]=x++;
         }
        }
         else
         {
        for(j=0;j<=3;j++)
        {
          a[i][j]=x++;
        }
         }
        turn=(turn+1)%2;
        
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

    
