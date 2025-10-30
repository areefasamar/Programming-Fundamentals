//Program to print full name backwards
#include<stdio.h>
int main (void)
{
	char first_name[50];
	char last_name[50];
	char full_name[100];
	char backward_name[100];
	int i, j, len;
	
	printf("Enter Your First Name: ");
	scanf("%s",first_name);
	
	printf("Enter Your Last Name: ");
	scanf("%s",last_name);
	
	for ( i=0 ; first_name[i]!='\0' ; i++)
	{
		full_name[i]=first_name[i];
	}
	
	full_name[i]= ' ';
	i++;
	
		for ( j=0 ; last_name[j]!='\0' ; j++)
	{
		full_name[i]=last_name[j];
		i++;
	}
	
	full_name[i]='\0';
	
	printf("Full Name: %s",full_name);
	
	len=i;
	
	for ( j=0 ; j<=len-1 ; j++)
	{
		i=i-1;
		backward_name[j]=full_name[i];
	}
	
	
	backward_name[j]='\0';
	
	printf("\nFull Name Backward: %s",backward_name);
	
	return 0;
}
