//Program to calculate the Volume
#include<stdio.h>
void getData( int h, int a);
void volumeCal ( int h2, int a2);
int main (void)
{
	int h1, a1;
	
	getData(h1,a1);
	
	return 0;
}

void getData( int h, int a)
{
	printf("Enter the Height: ");
	scanf("%d",&h);
	
	printf("\nEnter the Base: ");
	scanf("%d",&a);
	
	volumeCal(h,a);
}

void volumeCal( int h2, int a2)
{
	float volume;
	
	volume = (a2 * a2 *h2)/3.0 ;
	
	printf("\nThe Volume is %.3f",volume);
}