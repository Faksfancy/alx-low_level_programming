#include <stdio.h>
/**
 * main - entry point for program
 *
 * Description: use putchar to print ints
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
