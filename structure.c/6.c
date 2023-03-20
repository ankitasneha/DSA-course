//6  structure which contains the roll,semester,sub[3],avg
#include<stdio.h>
    typedef struct{
        char name[100];
        int age;
        float marks;
    }
    display;

    int i = 1, total = 0;
    float avg;

    void students(display* e){
        printf("Name of student %d is : %s \n", i, (*e).name);
        printf("Age of student %d is : %d \n", i, (*e).age);
        printf("marks of student %d is : %f \n", i, (*e).marks);
        total = total + (*e).marks;
        if(i == 3){
            avg = total/3.0;
            printf("Average is: %f", avg);
            return;
        }
        i++;
        return(students(e+1));
    }


    int main(){
        
        display e[3];
        
        for(int i = 0; i < 3; i++){
            printf("Enter name of student %d: ", i+1);
            scanf(" %s", &e[i].name);
            printf("Enter age of student %d: ", i+1);
            scanf("%d", &e[i].age);
            printf("Enter marks of student %d: ", i+1);
            scanf("%f", &e[i].marks);
        }

        students(&e[0]);

        return 0;
    }