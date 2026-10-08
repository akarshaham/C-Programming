#include <stdio.h>

int main ()
{
    int quantity;
    int price;
    int expenses;
    
    printf("\tEnter the price of one item: ");
    scanf("%d", &price);
    
    printf("\tEnter the quantity: ");
    scanf("%d", &quantity);
    
    if(quantity > 1000)
    {
        expenses = quantity * price * 0.9;
    }
    else
    {
        expenses = quantity * price;
    }
        printf("\tYour total expenses are: %d", expenses);
        
    return 0;
}
