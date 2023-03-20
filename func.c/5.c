//adding
#include <stdio.h>
int i;
int find(int n,int arr[])
{
    int index=arr[n];
    return index;
}
int add(int term,int arr[],int len)
{
    for(i=0;i<len;i++)
    {
        arr[i]=arr[i]+term;
    }
    return arr[len];
}
int main()
{
    int len;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++)
    {
        printf("Enter the [%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index: ");
    scanf("%d",&n);
    int g=find(n,arr);
    printf("The element is %d index is %d",n,g);
    printf("\n");
    arr[len]=add(g,arr,len);
    printf("The array after addition: \n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}