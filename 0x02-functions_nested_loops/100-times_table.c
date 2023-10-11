#include "main.h"
#include <stdio.h>

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result < 10)
				{
					_putchar(result + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (result < 100)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}

}
