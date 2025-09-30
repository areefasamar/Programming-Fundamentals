// Program for delete confirmation
#include<stdio.h>
int main (void)
{
	char choice;
	
	printf("Are you sure to delete?\n");
	printf("Y/y: Yes \nN/n: No \n");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'Y':
		case'y':
			printf("\nDeleted Successfully.");
			break;
			
		case 'N':
		case 'n':
			printf("\nDelete Cancelled.");
			break;
			
		default:
			printf("Choose the right option.");
			break;
	}
	return 0;
}