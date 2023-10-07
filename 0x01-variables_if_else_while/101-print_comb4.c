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
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				putchar('0' + i);

				putchar('0' + j);

				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
