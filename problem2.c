#include <stdio.h>

int main ()
{
    // Program to give 10% discount if quantity of item is more than 1000

    int quantity;
    float price;
    float expenses;
    float discount;

    printf("\tEnter the price of one item: ");
    scanf("%f", &price);
    
    printf("\tEnter the quantity: ");
    scanf("%d", &quantity);
    
    if(quantity > 1000)
    {
        discount = 10;
    }
    else
    {
        discount = 0;
    }
	expenses = quantity * price * (1 - discount/100);
        printf("\tYour total expenses are: %f\n", expenses);
        
    return 0;
}
