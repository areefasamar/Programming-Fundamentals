//Program to round off the value upto two decimal place
#include <stdio.h>
int main(void)
{
    float num;
    
    printf("Enter a positive number: ");
    scanf("%f", &num);
    
    // Rounding to two decimal places
    num = num * 100;       // Shift two places to left
    num = num + 0.5;       // Add 0.5 to round correctly
    num = (int)num;        // Remove fractional part
    num = num / 100;       // Shift back to original place

    printf("Rounded value: %.2f", num);
    
    return 0;
}
