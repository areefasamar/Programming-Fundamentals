#include<stdio.h>
int main(void)
{
	int n=5, i, j;
	
	for ( i=1 ; i<=n ; i++)
	{
		for ( int space=1 ; space<=n-i ; space++)
		{
			printf(" ");
		}
		
		for ( j=1 ; j<=(i*2-1) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for ( i=n-1 ; i>=1 ; i--)
	{
		for ( int space=1 ; space<=n-i ; space++)
		{
			printf(" ");
		}
		
		for ( j=1 ; j<=(i*2-1) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}