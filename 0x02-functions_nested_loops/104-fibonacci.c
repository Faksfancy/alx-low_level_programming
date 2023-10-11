#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	int n = 98;

	long long a = 1, b = 2, c, i;

	printf("%lld, %lld", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
