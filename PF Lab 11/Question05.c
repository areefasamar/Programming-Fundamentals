#include<stdio.h>

struct complex_number
{
    int real;
    int imaginary;
};

void read(struct complex_number *a);
void write(struct complex_number a);
void add(struct complex_number a, struct complex_number b, struct complex_number *answer);
void multiply(struct complex_number a, struct complex_number b, struct complex_number *answer2);

int main(void)
{
    struct complex_number z1, z2, result, result2;

    printf("Enter the first complex number:\n");
    read(&z1);

    printf("Enter the second complex number:\n");
    read(&z2);

    printf("\nFirst Complex Number = ");
    write(z1);

    printf("\nSecond Complex Number = ");
    write(z2);

    add(z1, z2, &result);
    multiply(z1, z2, &result2);

    printf("\n\nSum = ");
    write(result);

    printf("\nProduct = ");
    write(result2);

    return 0;
}

void read(struct complex_number *a)
{
    printf("Real Part: ");
    scanf("%d", &a->real);

    printf("Imaginary Part: ");
    scanf("%d", &a->imaginary);
}

void write(struct complex_number a)
{
    printf("%d + %di", a.real, a.imaginary);
}

void add(struct complex_number a, struct complex_number b, struct complex_number *answer)
{
    answer->real = a.real + b.real;
    answer->imaginary = a.imaginary + b.imaginary;
}

void multiply(struct complex_number a, struct complex_number b, struct complex_number *answer2)
{
    answer2->real = (a.real * b.real) - (a.imaginary * b.imaginary);
    answer2->imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
}
