//Sorting Function 
#include <stdio.h>
void SortFunction(int *arr, int *size, int order);
int main(void)
{
    int array[20];
    int size, order;

    printf("Enter the size of the array (max 20): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", array + i); // pointer form of &array[i]
    }

    printf("\n01: Ascending Order\n02: Descending Order");
    printf("\nEnter the Order: ");
    scanf("%d", &order);

    SortFunction(array, &size, order);

    printf("\nSorted Array:\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }

    printf("\n");
    
    return 0;
}

void SortFunction(int *arr, int *size, int order)
{
    int temp;

    // Simple bubble sort using pointers
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = i + 1; j < *size; j++)
        {
            if (order == 1) // ascending
            {
                if (*(arr + i) > *(arr + j))
                {
                    temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
            else if (order == 2) // descending
            {
                if (*(arr + i) < *(arr + j))
                {
                    temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }
}

