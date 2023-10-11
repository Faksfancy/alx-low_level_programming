#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	int max_result = n * n;
	int max_digits = 0;
	int temp_max = max_result;

	while (temp_max > 0)
	{
		max_digits++;
		temp_max /= 10;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			int digits = 0;

			int temp_result = result;

			while (temp_result > 0)
			{
				digits++;
				temp_result /= 10;
			}
			int spaces = max_digits - digits;

			for (int s = 0; s < spaces; s++)
			{
				putchar(' ');
			}

			if (j > 0)
			{
				putchar(',');
				putchar(' ');
			}

			if (result < 10)
			{
				putchar('0' + result);
			}
			else
			{
				while (result > 0)
				{
					putchar('0' + result % 10);
					result /= 10;
				}
			}
		}
		putchar('\n');
	}
}
