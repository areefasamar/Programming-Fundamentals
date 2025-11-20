//Program to store phone number by using structures
#include<stdio.h>
struct phone
{
	int area_code;
	int exchange;
	int number;
};
int main (void)
{
	struct phone num1={212,767,8900},num2;
	
	printf("\nEnter area code: ");
	scanf("%d",&num2.area_code);
	
	printf("\nEnter exchange: ");
	scanf("%d",&num2.exchange);
	
	printf("\nEnter number: ");
	scanf("%d",&num2.number);
	
	printf("\n\n=============================================================\n");
	printf("                   PHONE NUMBERS");
	printf("\n=============================================================\n");
	
	printf("\nMy number is (%d) %d-%d",num1.area_code,num1.exchange,num1.number);
	printf("\nYour number is (%d) %d-%d",num2.area_code,num2.exchange,num2.number);
	
	return 0;
}