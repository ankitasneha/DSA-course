#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,m,n;
    int a[10][20];
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++) 
        {
            printf("Enter data in [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++) 
        {
           printf("%d ",a[i][j]);
        }

        printf("\n");

    }
    return 0;
}
