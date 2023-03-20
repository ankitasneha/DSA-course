//print gross amt
#include<stdio.h>

typedef struct{
	int empid;
	char empname[20];
	int BS;
	int gross;
} emp;

int main()
{
	emp e1,e2,e3;
	
	printf("Enter name, employee id and basic salary of Employee1: ");
	scanf("%s %d %d",e1.empname,&e1.empid,&e1.BS);
	e1.gross = e1.BS + (0.1 * e1.BS) + (0.2 * e1.BS);
	
	printf("Enter name, employee id and basic salary of Employee2: ");
	scanf("%s %d %d",e2.empname,&e2.empid,&e2.BS);
	e2.gross = e2.BS + (0.1 * e2.BS) + (0.2 * e2.BS);
	
	printf("Enter name, employee id and basic salary of Employee3: ");
	scanf("%s %d %d",e3.empname,&e3.empid,&e3.BS);
	e3.gross = e3.BS + (0.1 * e3.BS) + (0.2 * e3.BS);
	
	
	printf("\nEmpID\t\tEmpName\t\tGross Salary\n");
	printf("%d\t\t%s\t\t%d\n",e1.empid,e1.empname,e1.gross);
	printf("%d\t\t%s\t\t%d\n",e2.empid,e2.empname,e2.gross);
	printf("%d\t\t%s\t\t%d\n",e3.empid,e3.empname,e3.gross);
	
	int total = e1.gross + e2.gross + e3.gross;
	printf("The total amount paid to the three employees is Rs.%d",total);
	
	return 0;
}
	