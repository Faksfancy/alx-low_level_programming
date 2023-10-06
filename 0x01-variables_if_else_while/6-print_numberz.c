#include <stdio.h>

/**
 * main - entry point for program
 *
 * Description: prints numbers 0-9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
