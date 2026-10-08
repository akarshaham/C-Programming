#include <stdio.h>

int main () 
{
    // Program to check the divisibility by 5
    int number;
    int remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    remainder = number % 5;
    
    if(remainder != 0)
    {
        printf("The number is not divisible by 5");
    }
    else
    {
        printf("The number is divisible by 5");
    }
    
    return 0;
}
