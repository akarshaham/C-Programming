#include <stdio.h>

int main()
{
	// Creating a calculator using operators
    
    int num1;
    int num2;
    int addition, subtraction, multiplication, division;
    
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    
    printf("Please enter the second number: ");
    scanf(" %d", &num2);
    
    addition = num1 + num2;
    subtraction = num2 - num1;
    multiplication = num1 * num2;
    division = num2 / num1;
    
    printf("\nThe Addition of Two Numbers is: %d\n", addition);
    printf("The Subtraction of Two Numbers is: %d\n", subtraction);
    printf("The Multiplication of Two Numbers is: %d\n", multiplication);
    printf("The Division of Two Numbers is: %d\n", division);    

    return 0;
}
