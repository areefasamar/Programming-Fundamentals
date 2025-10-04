#include <stdio.h>
int main() 
{
    int original_num, num= 0, d1, d2, d3, d4, d5, sum, i, isPrime=1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &original_num);

    if (original_num < 10000 || original_num > 99999) 
	{
        printf("Invalid Input! Please enter a 5-digit number.\n");
        return 0;
    }
    
    num = original_num;

    d5 = num % 10;        
    num = num / 10;
    d4 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d1 = num % 10; 

    sum= d1 + d2 + d3 + d4 + d5;
    
    if ( sum % 2 == 0)
    {
    	
    for ( i = 2; i < original_num; i++ )
    {
        if ( original_num % i == 0 )
        {
        isPrime = 0; 
        break;
        }
    }
    
    if (isPrime==1)
    {
    printf("\nThe sum of digits is Even and %d is a Prime Number.\n", original_num);
    }
    else
    {
    printf("\nThe sum of digits is Even and %d is Not a Prime Number.\n", original_num);
    }
     
    }
    
    else
    {
    	if ( d1==d5 && d2==d4)
    	{
    		 printf("\nThe sum of digits is Odd and %d is a Palindrome Number.\n", original_num);
		}
		else
		{
			 printf("\nThe sum of digits is Odd and %d is Not a Palindrome Number.\n", original_num);
		}
	}

    return 0;
   
}
