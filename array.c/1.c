#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    int a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++) 
        {
            scanf("%d",&a[i][j]);
        }

    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++) 
        {
           printf("%d ",a[i][j]);
        }

        printf("\n");

    }
    return 0;
}

