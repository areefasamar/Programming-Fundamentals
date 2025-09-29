// Program to calculate Average Speed
#include<stdio.h>
int main()
{
	unsigned time,distance1,distance2,distance3,distance4,distance5;
	float avgdistance,avgspeed;
	
	printf("Note: The time should be non-negative and between (1-5) hours.\n\tEnter the time taken by the car to travel (in hours):"); 
	scanf("%u",&time);
	
	printf("\n\nNote: The distance should be non-negative.\n\tEnter the distance travelled by the car in the 1st hour (in miles):");
	scanf("%u",&distance1);
	
	printf("\n\n\tEnter the distance travelled by the car in the 2nd hour (in miles):");
	scanf("%u",&distance2);
	
	printf("\n\n\tEnter the distance travelled by the car in the 3rd hour (in miles):");
	scanf("%u",&distance3);
	
	printf("\n\n\tEnter the distance travelled by the car in the 4th hour (in miles):");
	scanf("%u",&distance4);
	
	printf("\n\n\tEnter the distance travelled by the car in the 5th hour (in miles):");
	scanf("%u",&distance5);
	
	
	avgdistance=(distance1+distance2+distance3+distance4+distance5)/5;
	avgspeed=avgdistance/time;
	
	printf("\n\nThe Average Speed is %.2f miles per hour.",avgspeed);
	
	getch();
	return 0;
}