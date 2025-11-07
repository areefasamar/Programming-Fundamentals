//Program to find the unique number and its frequency in an array
#include<stdio.h>
void CountFrequency( int array[], int n );
int main(void)
{
	int n1;
	
	printf("Enter the no of elements in array: ");
	scanf("%d",&n1);
	
	int array1[n1];
	
	printf("Enter the elements of array: ");
	for( int i=0 ; i<n1 ; i++ )
	{
		printf("\nEnter the %d element: ",i+1);
		scanf("%d",&array1[i]);
	}
	
	CountFrequency(array1,n1);
	
	return 0;
}

void CountFrequency( int array[], int n)
{
	int visited[n];
	
	for ( int i=0 ; i<n ; i++)
	{
		visited[i]=0;
	}
	
	for ( int i=0 ; i<n ; i++)
	{
		if ( visited[i]==1)
		{
			continue;
		}
	    
	    int count = 1;
	    
		for ( int j= i + 1; j<n ; j++)
		{
			if ( array[i]==array[j])
			{
				count++;
				visited[j]=1;
			}
		}
		
		printf("\nValue= %d\tFrequency= %d",array[i],count);
	}
}
