//Program to print the maxmimum occuring character
#include<stdio.h>
int main (void)
{
	char name[100], course[100], combined[200], maxchar;
	int i, j, count;
	
	printf("Enter Your Full Name:");
	fgets( name, 100, stdin);

	printf("Enter Your Course Name: ");
	fgets( course, 100, stdin);
	
	for ( i=0 ; name[i]!='\0' ; i++)
	{
		combined[i]=name[i];
	}
	
	for ( j=0 ; course[j]!='\0' ; j++)
	{
		combined[i]=course[j];
		i++;
	}
	
	combined[i]='\0';
	
	for ( i=0 ; combined[i]!='\0' ; i++)
	{
		if ( combined[i]>='A' && combined[i]<='Z' )
		{
			combined[i]=combined[i]+32;
		}
	}
	
	int maxfrequency=0;
	
	for ( i=0 ; combined[i]!='\0' ;i++)
	{  
	    count=0;
	
        if ( combined[i]==' ' || combined[i]=='\n' )
        {
        	continue;
		}
		
		for ( j=0 ; combined[j]!='\0' ; j++ )
		{
			if ( combined[i]==combined[j] )
			{
				count++;
			}
		}
		
		if ( count > maxfrequency )
		{
			maxfrequency = count;
			maxchar= combined[i];
		}
		
	}
	printf("\nMaximum Frequency= %d\nMaximum Frquency Character= %c", maxfrequency, maxchar);
	
	return 0;
}
