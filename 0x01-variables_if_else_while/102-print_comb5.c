#include <stdio.h>

/**
 * main - entry function for program
 *
 * Description: print '00', '01'..'99'
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar('0' + (i / 10));

			putchar('0' + (i % 10));

			putchar(' ');

			putchar('0' + (j / 10));

			putchar('0' + (j % 10));

			if (i != 99 || j != 99)
			{
				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
