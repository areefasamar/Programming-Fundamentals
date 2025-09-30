// Program for placing online food order
#include<stdio.h>
int main(void)
{
	char order1, order2, order3, order4;
	int types, quantity1, quantity2, quantity3, quantity4, total1=0, total2=0, total3=0, total4=0,finaltotal;
	
	printf("\t\t\t\t\tABC Restaurant Online Order Placement\n");
	printf("\t\t\t\t\t\t\tWELCOME!\n");
	printf("\nPlease select from the following Menu");
	printf("\nB= Burger");
	printf("\nF= French Fries");
	printf("\nP= Pizza");
	printf("\nS= Sandwiches");
	
	printf("\nHow many types of snacks you want to order: ");
    scanf("%d", &types);
    
    if (types>=1)
    {
    	printf("Enter first snack you want to order: ");
    	scanf(" %c",&order1);
    	printf("Please provide quantity: ");
    	scanf("%d",&quantity1);
    	
    	switch (order1)
    	{
    		case 'B':
    		case 'b':
    			total1= quantity1 * 200;
    			break;
    			
    		case 'F':
    		case 'f':
    			total1= quantity1 * 50;
    			break;
    			
    		case 'P':
    		case 'p':
    			total1= quantity1 * 500;
    			break;
    			
    		case 'S':
    		case 's':
    			total1= quantity1 * 150;
    			break;
    			
    		default:
    			printf("Invalid Choice.");
				
		}
    }
    
    if (types>=2)
    {
		printf("Enter second snack you want to order: ");
    	scanf(" %c",&order2);
    	printf("Please provide quantity: ");
    	scanf("%d",&quantity2);
    	
    	switch (order2)
    	{
    		case 'B':
    		case 'b':
    			total2= quantity2 * 200;
    			break;
    			
    		case 'F':
    		case 'f':
    			total2= quantity2 * 50;
    			break;
    			
    	    case 'P':
    		case 'p':
    			total2= quantity2 * 500;
    			break;
    			
    		case 'S':
    		case 's':
    			total2= quantity2 * 150;
    			break;
    			
    		default:
    			printf("Invalid Choice.");
				
		}
	}
	
	if (types>=3)
    {
    	printf("Enter third snack you want to order: ");
    	scanf(" %c",&order3);
    	printf("Please provide quantity: ");
    	scanf("%d",&quantity3);
    	
    	switch (order3)
    	{
    		case 'B':
    		case 'b':
    			total3= quantity3 * 200;
    			break;
    			
    		case 'F':
    		case 'f':
    			total3= quantity3 * 50;
    			break;
    			
    	    case 'P':
    		case 'p':
    			total3= quantity3 * 500;
    			break;
    			
    		case 'S':
    		case 's':
    			total3= quantity3 * 150;
    			break;
    			
    		default:
    			printf("Invalid Choice.");
				
		}
    }
    
	if (types>=4)
	{
    	printf("Enter fourth snack you want to order: ");
    	scanf(" %c",&order4);
    	printf("Please provide quantity: ");
    	scanf("%d",&quantity4);
    	
    	switch (order4)
    	{
    		case 'B':
    		case 'b':
    			total4= quantity4 * 200;
    			break;
    			
    	    case 'F':
    		case 'f':
    			total4= quantity4 * 50;
    			break;
    			
        	case 'P':
    		case 'p':
    			total4= quantity4 * 500;
    			break;
    			
    		case 'S':
    		case 's':
    			total4= quantity4 * 150;
    			break;
    			
    		default:
    			printf("Invalid Choice.\n");
				
		}
	}
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\nYou have ordered!\n");
	
	if ( order1=='B' || order1=='F' || order1=='P' || order1=='S'|| order1=='b' || order1=='f' || order1=='p' || order1=='s')
   {
   	if (order1=='B'|| order1=='b')
   	    printf("%d Burger (s) value %d PKR",quantity1,total1);
   	    
   	else if (order1=='F'|| order1=='f')
   	    printf("%d French Fries value %d PKR",quantity1,total1);
   	    
   	else if (order1=='P'|| order1=='p')
   	    printf("%d Pizza (s) value %d PKR",quantity1,total1);
   	    
   	else 
   	    printf("%d Sandwich value %d PKR",quantity1,total1);
   	  
   }
   
   if ( order2=='B' || order2=='F' || order2=='P' || order2=='S'|| order2=='b' || order2=='f' || order2=='p' || order2=='s')
   {
   	if (order2=='B'|| order2=='b')
   	    printf("\n%d Burger (s) value %d PKR",quantity2,total2);
   	    
   	else if (order2=='F'|| order2=='f')
   	    printf("\n%d French Fries value %d PKR",quantity2,total2);
   	    
   	else if (order2=='P'|| order2=='p')
   	    printf("\n%d Pizza (s) value %d PKR",quantity2,total2);
   	    
   	else 
   	    printf("\n%d Sandwich value %d PKR",quantity2,total2);
   	  
   }
   
   if ( order3=='B' || order3=='F' || order3=='P' || order3=='S'|| order3=='b' || order3=='f' || order3=='p' || order3=='s')
   {
   	if (order3=='B'|| order3=='b')
   	    printf("\n%d Burger (s) value %d PKR",quantity3,total3);
   	    
   	else if (order3=='F'|| order3=='f')
   	    printf("\n%d French Fries value %d PKR",quantity3,total3);
   	    
   	else if (order3=='P'|| order3=='p')
   	    printf("\n%d Pizza (s) value %d PKR",quantity3,total3);
   	    
   	else 
   	    printf("\n%d Sandwich value %d PKR",quantity3,total3);
   	  
   }

if ( order4=='B' || order4=='F' || order4=='P' || order4=='S'|| order4=='b' || order4=='f' || order4=='p' || order4=='s')
   {
   	if (order4=='B'|| order4=='b')
   	    printf("\n%d Burger (s) value %d PKR",quantity4,total4);
   	    
   	else if (order4=='F'|| order4=='f')
   	    printf("\n%d French Fries value %d PKR",quantity4,total4);
   	    
   	else if (order4=='P'|| order4=='p')
   	    printf("\n%d Pizza (s) value %d PKR",quantity4,total4);
   	    
   	else 
   	    printf("\n%d Sandwich value %d PKR",quantity4,total4);
   	  
   }
    
    finaltotal= total1 + total2 + total3 + total4; 
    printf("\nTotal: %d",finaltotal);
    printf("\nThank you for your order... have a nice day.");
    getch();
    return 0;


}