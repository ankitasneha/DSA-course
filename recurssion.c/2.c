// even number
#include <stdio.h>

int printEven(int num){ 
    printf("%d\n", num);
    if (num == 10) 
        return num;
    
    else
        return printEven(num + 2); 
    }

int main() {
    printf("\nFinal return value from function is : %d\n", printEven(2));
    return 0;
}

