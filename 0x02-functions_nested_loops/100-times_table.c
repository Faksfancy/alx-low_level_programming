#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always 0.
*/

void print_times_table(int n)
{
	int i, pT, pO, lT;

	i = 0;
	pT = 0;
	pO = 0;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		while (i < n)
		{
			n = 0;
			lT = 0;

			while (n < i)
			{
				lT = n * i;

				pO = lT % 10;

				pT = (lT - pO) / 10;

				if (pT == 0 && n > 0)
				{
					_putchar(' ');
				}
				else if (n > 0)
				{
					_putchar(pT + '0');
				}
				_putchar(pO + '0');
				if (n == i)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				n++;
			}
			_putchar('\n');
			i++;
		}
	}

}
