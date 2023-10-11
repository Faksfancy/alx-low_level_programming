#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int i,j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j > 0)
			{
				_putchar(' ');
			}

			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
