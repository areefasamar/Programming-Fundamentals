//Program to take transpose and to check whether the matrix is symmetric or asymmetric 
#include<stdio.h>
int main (void)
{
	int n, m, i, j, issymmetric=1;
	
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	printf("Enter the number of columns:");
	scanf("%d",&m);
	
	int matrix[n][m], transpose[m][n];
	
	for( i=0 ; i<n ; i++ )
	{
		for( j=0 ; j<m ; j++ )
		{
			printf("Enter the element (%d,%d):",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
    for( i=0 ; i<n ; i++ )
	{
		for( j=0 ; j<m ; j++ )
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	
	
    for( i=0 ; i<n ; i++ )
	{
		for( j=0 ; j<m ; j++ )
		{
		   if ( matrix[i][j] != transpose[i][j])
		   {
		   	   issymmetric=0;
		   	   break;
		   }
		   
		}
		
		if (issymmetric==0)
		{
			break;
		}
	}
	
	printf("\nMATRIX:\n");
	for( i=0 ; i<n ; i++ )
	{
		for( j=0 ; j<m ; j++ )
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTRANSPOSE:\n");
	
	for( i=0 ; i<m ; i++ )
	{
		for( j=0 ; j<n ; j++ )
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	
	if ( issymmetric == 1)
	{
		printf("\nIt is a Symmetric Matrix");
	}
	else
	{
		printf("\nIt is an Asymmetric Matrix");
	}
	
	return 0;
	 
	
}
