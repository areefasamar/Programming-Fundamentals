// Program to check whether the input number is divisible by 7 ot not
#include <stdio.h>
int main(void) 
{
    int num, last_digit, rest_digits;

    printf("Enter a Number:");
    scanf("%d", &num);

    if (num < 0) 
	{
	 num = -num; 
     last_digit = num % 10;
     rest_digits = num / 10;
     num = rest_digits - (2 * last_digit); 
    }

    if (num > 7 || num < -7) 
	{
     last_digit = num % 10;
     rest_digits = num / 10;
     num = rest_digits - (2 * last_digit);
    }
    
    if (num > 7 || num < -7) 
	{
     last_digit = num % 10;
     rest_digits = num / 10;
     num = rest_digits - (2 * last_digit);
    }

    if (num > 7 || num < -7)
	{
     last_digit = num % 10;
     rest_digits = num / 10;
     num = rest_digits - (2 * last_digit);
    }

    if (num == 0 || num == 7 || num == -7)
    {
     printf("Divisible by 7\n");
    }
    
    else
    {
        printf("Not divisible by 7\n");
    }
 
    getch();
    return 0;
}
