#include<stdio.h>
struct course
{
	char name[3][50];
	float gpa[3];
};

struct address
{
	char street[50];
	char city[50];
	char state[50];
	int zip;
};

struct student
{
	float cgpa; 
	struct course c;
	struct address a; 
};
int main(void)
{
	struct student s1,s2;
	int maxcourses=3;
	
	printf("STUDENT 01:");
	printf("\nEnter Your CGPA: ");
	scanf("%f",&s1.cgpa);
	
	for( int i=0 ; i<maxcourses ; i++)
	{
	printf("\nEnter the %d Course Name: ",i+1);
	scanf(" %[^\n]s",s1.c.name[i]);
	
	printf("Enter the Course GPA: ");
	scanf("%f",&s1.c.gpa[i]);
    }

	printf("\nEnter your Street Address: ");
	scanf(" %[^\n]s",s1.a.street);
	
	printf("Enter your City: ");
	scanf(" %[^\n]s",s1.a.city);
	
	printf("Enter your State: ");
	scanf(" %[^\n]s",s1.a.state);
	
	printf("Enter your Zip code: ");
	scanf(" %d",&s1.a.zip);
	
	printf("\n\nSTUDENT 02:");
	printf("\nEnter Your CGPA: ");
	scanf("%f",&s2.cgpa);
	
	for( int i=0 ; i<maxcourses ; i++)
	{
	printf("\nEnter the %d Course Name: ",i+1);
	scanf(" %[^\n]s",s2.c.name[i]);
	
	printf("Enter the Course GPA: ");
	scanf("%f",&s2.c.gpa[i]);
    }

	printf("\nEnter your Street Address: ");
	scanf(" %[^\n]s",s2.a.street);
	
	printf("Enter your City: ");
	scanf(" %[^\n]s",s2.a.city);
	
	printf("Enter your State: ");
	scanf(" %[^\n]s",s2.a.state);
	
	printf("Enter your Zip code: ");
	scanf(" %d",&s2.a.zip);
	
	printf("\n\n--------------------------DETAILS---------------------------------------\n");
	if (s1.cgpa>s2.cgpa)
	{
		printf("\nStudent 01 has the highest CGPA.");
	}
	else if (s1.cgpa<s2.cgpa)
	{
			printf("\nStudent 02 has the highest CGPA.");
	}
	else
	{
		printf("\nBoth students have equal CGPA.");
	}
	
	for ( int i=0 ; i<maxcourses ; i++)
	{
		if( s1.c.gpa[i]>s2.c.gpa[i])
		{
			printf("\nStudent 01 has highest GPA in %s.",s1.c.name[i]);
		}
		else if ( s1.c.gpa[i]<s2.c.gpa[i])
		{
			printf("\nStudent 02 has highest GPA in %s.",s2.c.name[i]);
		}
		else
		{
			printf("\nBoth Students have equal GPA in %s.",s1.c.name[i]);
		}
	}
	
	return 0;
}