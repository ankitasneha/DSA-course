//taking two pointers changing the value
#include<stdio.h>

int main(){
    int a[10];

    for(int i = 0; i < 10; i++){
        printf("Enter value for element at %d position \n", i);
        scanf("%d", &a[i]);
    }

    int *b = &a[0];
    int *c = &a[5];

    printf("The array is:\n");

    for(int i = 0; i < 5; i++){
        printf("%d %d ",*(c+i),*(b+i));
    }

    return 0;
}