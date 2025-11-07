#include <stdio.h>

// Function to display instructions
void instructions() 
{
    printf("This program calculates the total cost of a house after 5 years.\n");
    printf("The total cost includes:\n");
    printf("1. Initial House Cost\n");
    printf("2. Fuel cost for 5 years\n");
    printf("3. Taxes for 5 years\n\n");
}

int main(void)
{
    // Given data
    float initialCost[3] = {67000, 62000, 75000};
    float annualFuel[3] = {2300, 2500, 1850};
    float taxRate[3] = {0.025, 0.025, 0.020};

    float totalCost, fuelCost5, tax5;

    instructions(); // Call instructions function

    for(int i = 0; i < 3; i++)
    {
        fuelCost5 = annualFuel[i] * 5;
        tax5 = (taxRate[i] * initialCost[i]) * 5;
        totalCost = initialCost[i] + fuelCost5 + tax5;

        printf("House %d:\n", i+1);
        printf("Initial Cost: %.2f\n", initialCost[i]);
        printf("Fuel Cost for 5 years: %.2f\n", fuelCost5);
        printf("Tax for 5 years: %.2f\n", tax5);
        printf("Total Cost after 5 years = %.2f\n\n", totalCost);
    }

    return 0;
}
