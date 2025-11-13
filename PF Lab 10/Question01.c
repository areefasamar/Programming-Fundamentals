//Understanding Pointers
#include<stdio.h>
int main(void)
{
	long int value1=200000, value2;
	long *lPtr;
	 
	lPtr = &value1;
	
	printf("%ld",*lPtr);
	
	value2= *lPtr;
	
	printf("\n%ld",value2);
	
	printf("\n%ld",&value1);
	
	printf("\n%ld",lPtr);
	
	//Yes same address value is being printed by both
  return 0;
}
