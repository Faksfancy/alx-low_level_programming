#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
*/

int main(void)
{
	int n = 50;

	long long int fib[n];

	fib[0] = 1;
	fib[1] = 2;

	for (int i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < n; i++)
	{
		printf("%lld", fib[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
}
