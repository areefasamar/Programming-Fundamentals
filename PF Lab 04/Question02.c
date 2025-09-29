// Program for discount calculation 
#include<stdio.h>
int main(void)
{ 
   float amount, discount_amount ,saved_amount ; 
   
   printf("Enter Your Shopping Purchase Amount:");
   scanf("%f",&amount);
   
    if ( amount <= 1999)
    {
    printf("\nDiscount is Not Applicale. You have to do a minimum purchase of RS. 2000.");
    saved_amount = amount*0.0;
   	discount_amount = amount-saved_amount;
   }
	
   
   else if ( amount >= 2000 && amount <= 4000 )
   {
   	printf("\nYou will get 20%% Discount.");
   	saved_amount = amount*0.20;
   	discount_amount = amount-saved_amount;
   }
   
   else if ( amount >= 4001 && amount <= 6000 )
   {
   	printf("\nYou will get 30%% Discount.");
   	saved_amount = amount*0.30;
   	discount_amount = amount-saved_amount;
   }
   
   else 
   {
   	printf("\nYou will get 50%% Discount.");
   	saved_amount = amount*0.50;
   	discount_amount = amount-saved_amount;
   }
   
   printf("\nActual Amount= %.2f",amount);
   printf("\nSaved Amount= %.2f",saved_amount);
   printf("\nAmount After Discount= %.2f",discount_amount);
   printf("\n\n------------- THANK YOU FOR SHOPPING ---------------");
   
   getch();
   return 0; 

}