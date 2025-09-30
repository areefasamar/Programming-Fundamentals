// Program for allocation of seat in university
#include<stdio.h>
int main(void)
{
	float nts_marks, fsc_marks;
	
	printf("Enter Your Fsc. Marks:");
	scanf("%f",&fsc_marks);
	
	printf("Enter Your NTS Marks:");
	scanf("%f",&nts_marks);
	
	if ( fsc_marks > 70 && nts_marks >= 70)
	{
		printf("\nYou are eligible for Oxford University - IT Department.\n");
	}
	
	else if ( fsc_marks > 70 && nts_marks >= 60)
	{
		printf("\nYou are eligible for Oxford University - Electronics Department.\n");
	}
	
	else if ( fsc_marks > 70 && nts_marks >= 50)
	{
		printf("\nYou are eligible for Oxford University - Telecommunication Department.\n");
	}
	
	else if ( fsc_marks >= 60 && fsc_marks <= 70 && nts_marks >= 50)
	{
		printf("\nYou are eligible for MIT University - IT Department.\n");
	}
	
	else if ( fsc_marks >= 50 && fsc_marks <= 59 && nts_marks >= 50)
	{
		printf("\nYou are eligible for MIT University - Chemical Department.\n");
	}
	
	else if ( fsc_marks >= 40 && fsc_marks <= 50 && nts_marks >= 50)
	{
		printf("\nYou are eligible for MIT University - Computer Department.\n");
    }
	
	else
	{
		printf("\nSorry, you are not eligible for any listed University.\n");
	}
	return 0; 
}
