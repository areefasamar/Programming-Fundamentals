#include<stdio.h>
int main(void)
{
	int testinteger=3000000000;
	printf("The Number is %d",testinteger);
	return 0;
	
	/*In this program the data type 'int' is used and the range of the int data type lies from                
	-2,147,483,648 to 2,147,483,648 in a 32-bit and a 64-bit CPU, while in this program the value
	stored in the int variable is 3,000,000,000 which is outside this range that's why a different
	value is shown as compare to the assigned value. To fix this error it is better to use a data 
	type which have a higher range. */
}