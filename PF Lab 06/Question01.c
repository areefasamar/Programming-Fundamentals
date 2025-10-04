// Program to find the factorial of a given number
#include<stdio.h>
int main (void)
{
	int num,i,fact=1;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if ( num < 0 )
	{
		printf("\nProgram Ends");
		return 0;
	}
	
	if ( num == 0 )
	{
		printf("\nInput Number= %d",num);
		printf("\nFactorial= 1");
		return 0;
	}
	
	for ( i=1; i<=num; i++)
	{
		fact *= i;
	}
	
	printf("\nInput Number= %d",num);
	printf("\nFactorial= %d",fact);
	
	return 0;
}
