#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int i, j;

	int result, tD, oD;

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
				}
				else if (result > 10 || result < 99)
				{
					tD = result / 10;
					oD = result / 10;
					_putchar(tD + '0');
					_putchar(oD + '0');
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

}
