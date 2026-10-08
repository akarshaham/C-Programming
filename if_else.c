#include <stdio.h>

int main () 
{
	int x;
	printf("Enter an integer: ");
	scanf("%d", &x);

	if (x < 10)
		x++;
	printf("\nx: %d\n", x);
	return 0;
}
