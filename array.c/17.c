#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,m,n,c,b,temp=0;
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
    c=a/2;
     for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++) 
        {
            temp[i][j]=b[i][j];
            b[i][j]=b[i+c][j+c];
            b[i+c][j+c]=temp[i][j];
           
        }
    }
    for(i=0;i<a;i++)
    {
    {
        for(j=0;j<a;j++)
        printf("%d\t",b[i][j]);
    }

        printf("\n");

    }
    return 0;
}
