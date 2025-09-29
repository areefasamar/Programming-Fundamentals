// Program to calculate Net Salary
#include<stdio.h>
int main(void)
{
	float gross_salary,tax_rate,tax_amount,salary;
	
	printf("Enter your Gross Salary:");
	scanf("%f",&gross_salary);
	
	printf("Enter your Tax Rate (in percentage):");
	scanf("%f",&tax_rate);
	
	tax_amount=(gross_salary*tax_rate)/100;
	salary=gross_salary-tax_amount;
	
	printf("\nYou have to pay Rs.%.2f Tax Amount\n",tax_amount);
	printf("Your Net Salary is Rs.%.2f",salary);
	
	getch();
	return 0;
	
}