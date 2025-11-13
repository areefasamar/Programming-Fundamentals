//Finding sum of array elements using pointers
#include<stdio.h>
int main (void)
{
	int m;
	
	printf("Enter the number of elements in array: ");
	scanf("%d",&m);
	
	int array[m];
	
    printf("\nEnter the Elements: ");
    for ( int i = 0 ; i<m ; i++)
    {
    	printf("\nEnter the element %d: ",i+1);
    	scanf("%d",&array[i]);
	}
	
	int sum=0;
	
	for ( int i=0 ; i<m ; i++)
	{
		sum+=*(array+i);
	}
	
	printf("\nSum = %d",sum);
	
	return 0;
}