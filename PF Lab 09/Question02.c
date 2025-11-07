//Program to tell the assigned position
#include<stdio.h>
void checkposition(int marks);
int main (void)
{
	int marks1; 
	
	printf("Enter your Marks: ");
	scanf("%d",&marks1);
	
	checkposition( marks1 );
	
	return 0;
}

void checkposition( int marks )
{
	
    float experience;
    
	if ( marks<50 )
	{
		printf("\nYou are not eligible for any position.");
	}
	else if ( marks>=50 && marks<60)
	{
		printf("\nCONGRATULATIONS!");
		printf("\nYou have been selected as an Trainee Engineer.");
	}
	else
	{
		printf("\nEnter years of experience: ");
		scanf("%f",&experience);
		
		if ( marks>=70 && experience>=2)
		{
		   printf("\nCONGRATULATIONS!");
		   printf("\nYou have been selected as an Associate Developer.");
	    }
	    
	   else if ( marks>=60 && experience>=1)
	    {
		   printf("\nCONGRATULATIONS!");
	 	   printf("\nYou have been selected as an Assistant Developer.");
	    }
	    else
	    {
	    	  printf("\nYou are not eligible for any position based on experience.");
		}
    }
}
