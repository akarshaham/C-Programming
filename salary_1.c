#include <stdio.h>

int main()
{
    // Calculating gross salary, by adding allowances given as percentage of basic salary

    int basicSalary;
    float grossSalary;
    float dearnessAllowance;
    float houseRentAllowance;

    printf("Enter basic salary: ");
    scanf("%d", &basicSalary);

    dearnessAllowance = 0.2 * basicSalary;
    houseRentAllowance = 0.4 * basicSalary;

    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

    printf("Gross salary is: %f\n", grossSalary);

    return 0;
}
