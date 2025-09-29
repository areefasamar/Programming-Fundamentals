// Program to calculate simple interest
#include<stdio.h>
int main(void)
{
	float principal, rate, time, simple_interest, SIamount;
	
	printf("Note: The Principal value must be between Rs.100 to Rs.1,000,000\n\tEnter the Principal Value:");
	scanf("%f",&principal);
	
	printf("\nNote: The Rate of interest should be between 5%% to 10%%\n\tEnter the Rate of Interest:");
	scanf("%f",&rate);
	
	printf("\nNote: The Time Period should be between 1 to 10 years\n\tEnter the Time Period:");
	scanf("%f",&time);
	
	simple_interest=(principal*rate*time)/100;
	SIamount= simple_interest+principal;
	
	printf("\n\nThe Simple Interest Amount is %.3f",SIamount);
	
	
	getch();
	return 0;
}