//Program to find the sum and average of positive elements in an array
#include<stdio.h>
int main(void)
{
	int n;
	float average=0;
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	int numbers[n], sum=0, count=0;
	
	for (int i=0 ; i<n ; i++ )
	{
		printf("Enter the %d element:",i+1);
		scanf("%d",&numbers[i]);
	}
	
	for ( int i=0 ; i<n ; i++)
	{
		if (numbers[i]>0)
		{
			sum += numbers[i];
			count++;
		}	
	}
	
	if ( count > 0)
	{
		average= sum/count;
		printf("\nPositive Numbers= %d",count);
	    printf("\nSum of Positive Numbers= %d",sum);
	    printf("\nAverage of Positive Numbers= %.2f",average);
		
	}
	else
	{
		printf("\nNo positive numbers entered");
	}
	
	 return 0;

}
