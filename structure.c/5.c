//structure contains roll,sem,avg
#include<stdio.h>

typedef struct{
	int roll;
	int sem;
	float sub[3];
	float avg;
} marks;

float cal(marks *P)
{
	float average;
	average = ((*P).sub[0] + (*P).sub[1] + (*P).sub[2]) / 3;
	return average;
}
int main()
{
	marks A;
	
	printf("Enter the roll number and semester of student: ");
	scanf("%d %d",&A.roll,&A.sem);
	int i;
	for(i = 0 ; i < 3 ; i++)
	{
		printf("Enter marks of the subject: ");
		scanf("%f",&A.sub[i]);
	}
	float res = cal(&A);
	A.avg = res;
	printf("The average marks of student is %4.2f",A.avg);
		
	return 0;
}