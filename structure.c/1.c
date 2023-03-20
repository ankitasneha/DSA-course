//student info
#include <stdio.h>
struct student
{
    char name[80];
    int rollno;
    float cgpa;
};
int main(int argc, char const *argv[])
{
    int n;
    struct student i[100];
    printf("Enter the no of students");
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        printf("Enter the name of student\n");
        scanf("%s", i[a].name);
        printf("Enter the roll no\n");
        scanf("%d", &i[a].rollno);
        printf("Enter the cgpa\n");
        scanf("%f", &i[a].cgpa);
    }
    for (int a = 0; a < n; a++)
    {
        printf("Student no %d\n", a + 1);
        printf("\nName:%s\nRoll no:%d\ncgpa:%f\n\n", i[a].name, i[a].rollno, i[a].cgpa);
    }
    return 0;
}