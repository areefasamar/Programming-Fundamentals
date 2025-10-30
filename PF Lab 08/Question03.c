//Program to compare two strings
#include<stdio.h>
int main(void)
{
	char str1[100], str2[100];
	int i, j, flag=0;
	
	printf("Enter First String: ");
	fgets( str1, 100, stdin);
	
	printf("Enter Second String: ");
	fgets( str2, 100, stdin);
	
	
	for ( i=0 ; str1[i]!='\0' && str2[i]!='\0' ; i++)
	{
		
		if ( str1[i]=='\n' && str2[i]=='\n' )
		{
			break;
		}
		
		if ( str1[i]!=str2[i] )
		{
			flag=1;
			break;
		}
	
   }
   
   if (flag==0)
   {
   	    printf("\nThe Strings Are Equal.");
   }
   else
   { 
       if ( str1[i]>str2[i] )
       {
       	   printf("First String is Greater.");
	   }
	   else
	   {
	   	  printf("Second String is Greater.");
	   }
   	
   }
   
   return 0;
}
