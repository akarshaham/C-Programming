#include <stdio.h>

int main () 
{
	// Program to print the greater of two numbers taken as input

	int A, B;
	printf("Enter first number: ");
	scanf("%d", &A);

	printf("Enter second number: ");
	scanf("%d", &B);

	if (A > B) {
		printf("\nFirst number is greater than the second number\n");
	}
	else {
		printf("\nSecond number is greater than the first number\n");
	}

	return 0;
}
