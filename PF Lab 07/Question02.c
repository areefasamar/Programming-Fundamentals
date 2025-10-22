//Program to check for Sparse Matrix
#include<stdio.h>
int main (void)
{
	int n, m, i, j, count=0;
	
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	printf("Enter the number of columns:");
	scanf("%d",&m);
	
	int matrix[n][m];
	
	for ( i=0 ; i<n ; i++ )
	{
		for ( j=0 ; j<m ; j++ )
		{
			printf("Enter the element (%d,%d):",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	
	for ( i=0 ; i<n ; i++ )
	{
		for ( j=0 ; j<m ; j++ )
		{
		    if ( matrix[i][j] == 0 )
			{
				count++;
			}	
		}
	}
	
	if ( count >= ((n*m))/2)
	{
		printf("\n It is a Sparse Matrix");
	}
	else
	{
		printf("\n It is Not a Sparse Matrix");
	}
	
	return 0;
	
}
