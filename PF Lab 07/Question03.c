//Program to give full name and number of characters 
#include<stdio.h>
#include<string.h>
int main(void)
{
	char first_name[50], last_name[50], full_name[100];
	int length;
	
	printf("Enter you First Name:");
	scanf("%s",first_name);
	
	printf("Enter you Last Name:");
	scanf("%s",last_name);
	
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

	printf("\nFull Name: %s",full_name);
	
	length= strlen(full_name);
	printf("\nNumber of characters in Full Name: %d",length-1);
		
	return 0;
	
}
