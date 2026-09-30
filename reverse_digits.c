#include <stdio.h>

int main()
{
    // Program to reverse digits of a number

    int n = 12345;
    int reverse = 0;
    int digit;

    digit = n % 10;
    reverse = reverse * 10 +  digit;
    n = n / 10;
    
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
    
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
    
    digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
    
    digit = n % 10;
    reverse = reverse * 10 + digit;

    printf("reverse = %d", reverse);

    return 0;
}
