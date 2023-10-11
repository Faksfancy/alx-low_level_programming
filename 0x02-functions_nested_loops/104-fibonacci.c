#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	int n = 98;

	long a = 1, b = 2, c, i;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
