#include <stdio.h>

int main(void)
{
    float array[20];
    
    printf("Enter the Elements:\n\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    float maximum = array[0];
    float maximum2 = array[0];

    for (int i = 1; i < 20; i++)
    {
        if (*(array + i) > maximum)
        {
            maximum2 = maximum;        // old max becomes 2nd max
            maximum = *(array + i);    // new max found
        }
        else if (*(array + i) > maximum2 && *(array + i) < maximum)
        {
            maximum2 = *(array + i);   // update 2nd max
        }
    }

    // Handle case where all numbers are equal
    if (maximum == maximum2)
        printf("\nAll elements are equal. No distinct second highest value.\n");
    else
        printf("\nSecond Highest Number = %.2f\n", maximum2);

    return 0;
}
