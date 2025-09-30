// Program for coffee machine
#include<stdio.h>
int main(void)
{
	char coffee, cupsize, method;
	float totaltw=76, totaltb=105;
	
	printf("\n--------------COFFEE MACHINE ----------------\n");
	printf("\nAvailable Coffee:");
	printf("\n B= Black Coffee");
	printf("\n W= White Coffee");
	printf("\nEnter your type of Coffee: ");
	scanf("%c",&coffee);
	
	printf("\nDo you want to double the cup size?");
	printf("\n Y= Yes");
	printf("\n N= No\n");
	scanf(" %c",&cupsize);
	
	printf("\nIs the coffee manual?");
	printf("\n Y= Yes");
	printf("\n N= No\n");
	scanf(" %c",&method);
	
	switch (method)
	{
		case 'Y':
		case 'y':
			printf("\nPlease follow the instrctions given below.");
			break;
		
		case 'N':
		case 'n':
		    printf("\nThe machine will handle the above steps.");
			break;
			
		default:	
		     printf("\nInvalid Choice.");
	}
	
	switch (coffee)
	{
		case 'W':
		case 'w':	
		printf("\n-----------WHITE COFFEE PREPARATION-------------");
		printf("\n Put Water (15 mins) ");
		printf("\n Sugar (15 mins) ");
		printf("\n Mix Well (20 mins) ");
		printf("\n Add Coffee (2 mins) ");
		printf("\n Add Milk (4 mins) ");
		printf("\n Mix Well (20 mins) ");
		
		if (cupsize =='N' || cupsize =='n')
		{
			printf("\nTotal time= %.2f mins",totaltw);
		}
		else
		{
			totaltw= totaltw + 0.50 ;
			printf("\nTotal time= %.2f mins",totaltw);
		}
		break;
		
		case 'B':
		case 'b':	
		printf("\n-----------BLACK COFFEE PREPARATION-------------");
		printf("\n Put Water (20 mins) ");
		printf("\n Sugar (20 mins) ");
		printf("\n Mix Well (25 mins) ");
		printf("\n Add Coffee (15 mins) ");
		printf("\n Mix Well (25 mins)");
		
		
		if (cupsize =='N' || cupsize =='n')
		{
		    printf("\nTotal time= %.2f mins",totaltb);
		}
		else
		{
			totaltb= totaltb + 0.50;
			printf("\nTotal time= %.2f mins",totaltb);
		}
		break;
		
		default:
			printf("Invalid Choice.");
    }
    return 0;
}