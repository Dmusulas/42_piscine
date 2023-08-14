#include <stdio.h>

int main(void)
{
	int	a = 1; // 1
	int	b = 3; // 11

	printf("At first a = %i and b = %i\n", a, b);
	a = a ^ b; // 
	b = a ^ b; // 1
	a = a ^ b;
	printf("At end a = %i and b = %i", a, b);
}
