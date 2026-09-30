#include <stdio.h>

int main()
{
    // To swap the value of two variables using a third variable

    int A;
    int B;
    int C;
    
    printf("Enter the value of first variable A: ");
    scanf("%d", &A);
    
    printf("Enter the value of second variable B: ");
    scanf("%d", &B);
    
    printf("The value of A before swap is %d\n", A);
    printf("The value of B before swap is %d\n", B);

    printf("Let's swap the values now!\n");

    C = A;
    A = B;
    B = C;
    
    printf("The value of A after swap is %d\n", A);
    printf("The value of B after swap is %d\n", B);

    return 0;
}
