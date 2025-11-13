//Understanding of array as a pointer
#include<stdio.h>
int main (void)
{
	int a[10];
	
	for ( int i=0 ; i<10 ; i++)
	{
		a[i]=i*i;
		printf("%d ",*(a+i));
	}
	return 0;
}