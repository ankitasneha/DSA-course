//4. Program to take info of 3 employees using an array in structure and display their info using a function

#include<stdio.h>

typedef struct{
    char name[100];
    int age;
    float performance;
}
display;

int i = 1;

void employees(display* e){
    printf("Name of employee %d is : %s \n", i, (*e).name);
    printf("Age of employee %d is : %d \n", i, (*e).age);
    printf("Performance of employee %d is : %f \n", i, (*e).performance);
    if(i == 3)
        return;
    i++;
    return(employees(e+1));
}


int main(){
    
    display e[3];
    
    for(int i = 0; i < 3; i++){
        printf("Enter name of employee %d: ", i+1);
        scanf(" %s", &e[i].name);
        printf("Enter age of employee %d: ", i+1);
        scanf("%d", &e[i].age);
        printf("Enter performance of employee %d: ", i+1);
        scanf("%f", &e[i].performance);
    }

    employees(&e[0]);

    return 0;
}