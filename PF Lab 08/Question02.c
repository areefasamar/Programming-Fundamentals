//Program to find the maximum frequency characters
#include<stdio.h>
#include<string.h>
int main (void)
{
	char name[100], course1[100], course2[100];
	char maxchar_name, maxchar_course1, maxchar_course2;
	int i, j, count;
	int maxfrequency_name = 0, maxfrequency_course1 = 0, maxfrequency_course2 = 0;

	printf("Enter Your Full Name: ");
	fgets(name, 100, stdin);

	printf("Enter Your First Course Name: ");
	fgets(course1, 100, stdin);

	printf("Enter Your Second Course Name: ");
	fgets(course2, 100, stdin);

	for (i=0 ; name[i]!='\0' ; i++)
	{
		if (name[i]>='A' && name[i]<='Z')
		{
			name[i]=name[i]+32;
		}
    }

	for (i=0 ; course1[i]!='\0' ; i++)
	{
		if (course1[i]>='A' && course1[i]<='Z')
		{
			course1[i]=course1[i]+32;
		}
    }

	for (i=0 ; course2[i]!='\0' ; i++)
	{
		if (course2[i]>='A' && course2[i]<='Z')
		{
			course2[i]=course2[i]+32;
		}
    }

	for (i=0 ; name[i]!='\0' ; i++)
	{
		if (name[i]==' ' || name[i]=='\n')
			continue;
		count=0;
		for (j=0 ; name[j]!='\0' ; j++)
		{
			if (name[i]==name[j])
				count++;
		}
		if (count>maxfrequency_name)
		{
			maxfrequency_name=count;
			maxchar_name=name[i];
		}
	}

	for (i=0 ; course1[i]!='\0' ; i++)
	{
		if (course1[i]==' ' || course1[i]=='\n')
		{
			continue;
		}
		
		count=0;
		
		for (j=0 ; course1[j]!='\0' ; j++)
		{
			if (course1[i]==course1[j])
			{
				count++;
	     	}
	    }
	    
		if (count>maxfrequency_course1)
		{
			maxfrequency_course1=count;
			maxchar_course1=course1[i];
		}
	}

	for (i=0 ; course2[i]!='\0' ; i++)
	{
		if (course2[i]==' ' || course2[i]=='\n')
		{
			continue;
		}
		
		count=0;
		
		for (j=0 ; course2[j]!='\0' ; j++)
		{
			if (course2[i]==course2[j])
		    {
		   		count++;
		    }
		}
		
		if (count>maxfrequency_course2)
		{
			maxfrequency_course2=count;
			maxchar_course2=course2[i];
		}
	}

	printf("\nFull Name : Maximum Frequency = %d, Character = %c", maxfrequency_name, maxchar_name);
	printf("\nCourse 1 : Maximum Frequency = %d, Character = %c", maxfrequency_course1, maxchar_course1);
	printf("\nCourse 2 : Maximum Frequency = %d, Character = %c", maxfrequency_course2, maxchar_course2);

	return 0;
}
