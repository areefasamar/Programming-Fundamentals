// Program to swap integer value
#include<stdio.h>
int main(void)
{
	int a,b,c;
	
	printf("Enter First Integer:");
	scanf("%d",&a);
	
	printf("Enter Second Integer:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nThe First integer is %d\n",a);
	printf("The Second integer is %d",b);
	
	getch();
	return 0;
}