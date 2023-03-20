#include <stdio.h>
int main()
{
    int i,j;
    int t;
    int mat[4][4];
    printf("Enter elements of matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("element a%d%d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nOriginal form:\n");
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    {
        printf("%d ",mat[i][j]);
        if(j==4-1)
        printf("\n\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            t=mat[i][j];
            mat[i][j]=mat[i+2][j+2];
            mat[i+2][j+2]=t;
        }
    }
    for(i=2;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            t=mat[i][j];
            mat[i][j]=mat[i-2][j+2];
            mat[i-2][j+2]=t;
        }

    }
    printf("The final matrix: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}