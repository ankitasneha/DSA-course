#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,x=1;
    int a[4][4];
    
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++) 
        {
            a[i][j]=x++;
           printf("%d ",a[i][j]);
        }

        printf("\n");
        
    }
    return 0;
}

