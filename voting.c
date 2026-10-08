#include <stdio.h>

int main ()
{
    // Program to check voting eligibility by Age
    // Also implements input and output of Gender
    // And nested if else by printing age group
    
    int Age;
    char Gender;
    
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    printf("Enter your gender(M for Male, F for Female): ");
    scanf(" %c", &Gender);
    
    
    if(Age >= 18 && Age < 100)
    {
        printf("\nYou are eligible to vote ");
        if(Age <= 60)
        {
            printf("and you'e an young adult. ");
        }
        else
        {
            printf("and you'e an senior citizen. ");
        }
    }
    else if(Age >= 100)
    {
        printf("\nPlease verify your age since it is greater than 100. ");
    }
    else
    {
        printf("\nYou are not eligible to vote.");
    }
    
    printf("Your gender is %c", Gender);
    
    return 0; 
}
