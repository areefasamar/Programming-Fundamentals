//Program to store data by using structures
#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	float salary;
	char department[100];
};
int main(void)
{
	struct employee p1;
	
	printf("\nEnter Your ID: ");
	scanf("%d",&p1.id);
	getchar();
	
	printf("\nEnter Your Name: ");
	scanf("%[^\n]s",p1.name);
	
	printf("\nEnter Your Salary: ");
	scanf("%f",&p1.salary);
	getchar();
	
	printf("\nEnter Your Department: ");
	scanf("%[^\n]s",p1.department);
	
	printf("\n\n======================================================================\n");
	printf("                        EMPLOYEE DETAILS");
	printf("\n======================================================================\n");
	
	printf("\nEmployee ID: %d",p1.id);
	printf("\nEmployee Name: %s",p1.name);
	printf("\nEmployee Salary: %.2f",p1.salary);
	printf("\nEmployee Department: %s\n",p1.department);
	return 0;
}
