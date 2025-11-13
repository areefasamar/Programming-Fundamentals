//Making Swap Function
#include<stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);
int main(void)
{
	int A, B, C;
	int *APtr, *BPtr, *CPtr;
	
	printf("Enter the Value of A: ");
	scanf("%d",&A);
	
	printf("Enter the Value of B: ");
	scanf("%d",&B);
	
	printf("Enter the Value of C: ");
	scanf("%d",&C);
	
	swaped(&A,&B,&C);
	
	return 0;
}

void swaped(int *aPtr, int *bPtr, int *cPtr)
{
	int temp;
	temp = *bPtr;
	*bPtr = *aPtr;
	*aPtr = *cPtr;
	*cPtr = temp; //Corrected Version (logical error in question)
	
	printf("\nSwapped Values:");
	printf("\nA=%d\nB=%d\nC=%d\n", *aPtr, *bPtr, *cPtr);
}