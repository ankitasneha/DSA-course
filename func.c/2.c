//to find avg,max,min
#include <stdio.h>
float average(int a, int b){
    return (float)(a+b)/2;
   

}
int maximum(int a, int b){
 if(a>b)
    return a;
    else 
    return b;
}
int minimum(int a, int b){
 if(a<b)
    return a;
    else 
    return b;
}
int main()
{
    int num1, num2;
    float avg;
    int max, min;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    avg = average(num1, num2);
    max = maximum(num1,num2);
     min = minimum(num1,num2);


    printf("Average of %d and %d is: %.2f\n",num1,num2,avg);
    printf("maximum of %d and %d is: %d\n",num1,num2,max);
    printf("minimum of %d and %d is: %d\n",num1,num2,min);

    return 0;
}