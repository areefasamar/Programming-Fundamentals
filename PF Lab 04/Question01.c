// Program to check character 
#include<stdio.h>
int main(void)
{
	char ch;
	
	printf("Enter the Character:");
	scanf("%c",&ch);
	
	if ( ch >= 'a' && ch <= 'z')
	{
		printf("\n'%c' is a Small Alphabet.",ch);
	}
	
	else if ( ch >= 'A' && ch <= 'Z')
	{
		printf("\n'%c' is a Capital Alphabet.",ch);
	}
	
	else if ( ch >= '0' && ch <= '9')
	{
		printf("\n'%c' is a Digit.",ch);
	}
	
	else
	{
	printf("\n'%c' is a Special Character.",ch);
    }
    
    return 0;
}