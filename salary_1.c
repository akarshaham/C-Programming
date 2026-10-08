#include <stdio.h>

int main()
{
int basicSalary;
int grossSalary;

printf("Enter basic salary: ");
scanf("%d", &basicSalary);

grossSalary = basicSalary + 0.4*basicSalary + 0.2*basicSalary;

printf("Gross salary is: %d", grossSalary);

return 0;
}