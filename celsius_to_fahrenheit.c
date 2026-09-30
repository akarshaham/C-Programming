#include <stdio.h>

int main () 
{
    // To convert celsius to fahrenheit

    float celsiusInput;
    float fahrenheitOutput;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsiusInput);
    
    fahrenheitOutput = celsiusInput * 1.8 + 32;
    
    printf("The temperature in Fahrenheit is %f\n", fahrenheitOutput);
    
    return 0;
}
