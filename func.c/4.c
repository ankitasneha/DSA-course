//to find the largest among 2D array
#include <stdio.h>
int i,j;
int largest(int arr[3][4])
{
    int max=arr[0][0];
    for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        if (arr[i][j]>max)
            max=arr[i][j];
    }
    return max;
}

int main()
{
    int arr[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the [%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The array: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nLargest in given array is %d", largest(arr));
    return 0;
}