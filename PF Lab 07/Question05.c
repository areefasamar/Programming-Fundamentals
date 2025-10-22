//Program to print the matrix and its maximum element 
#include<stdio.h>
int main (void)
{
	int n, m, i, j, max;
	
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	printf("Enter the number of columns:");
	scanf("%d",&m);
	
	int matrix[n][m];
	
	for ( i=0 ; i<n ; i++)
	{
		for ( j=0 ; j<m ; j++)
		{
			printf("Enter the element (%d,%d):",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nMATRIX:\n");
	for ( i=0 ; i<n ; i++)
	{
		for ( j=0 ; j<m ; j++)
		{
			printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
	
	max = matrix[0][0];

	for ( i=0 ; i<n ; i++)
	{
		for ( j=0 ; j<m ; j++)
		{
			if ( matrix[i][j] > max ) 
			{
				max= matrix[i][j];
			}
		}
	}
	
	printf("\nMaximum element in the matrix is %d",max);
	
	return 0;
}
