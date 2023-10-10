#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i = 97, j;

	while (i < 123)
	{
		j = 0;
		while (j < 11)
		{
			_putchar(i);
			j++;
		}
		_putchar('\n');
		i++;
	}

}
