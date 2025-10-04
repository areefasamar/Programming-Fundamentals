// Program to find the Fibonacci Series using for loop
#include <stdio.h>
int main()
{
    int a = 0, b = 1, next, sum = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d %d ", a, b);

    for (next = a + b; next <= 1000; next = a + b) 
    {
        printf("%d ", next);

        if (next % 3 == 0 && next % 5 == 0 && next % 7 == 0) 
        {
            sum += next;
        }

        a = b;
        b = next;
    }

    printf("\n\nSum of Fibonacci numbers divisible by 3, 5, and 7 = %d\n", sum);

    return 0;
    
    /*Both for and while loop are equally efficient, for is relatively more efficient when the number of illetrations are exactly known, in contrast while is 
    used when the number of illetrations are not known. But if we compare both loops for constructing fibonacci series, while loop is relatively more efficient 
	for beginners, because the update (next = a + b) is done inside the loop body which makes it easy to understand*/
    
}
