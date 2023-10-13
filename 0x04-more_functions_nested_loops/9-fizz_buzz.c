#include <stdio.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;

	char f[] = "Fizz";

	char b[] = "Buzz";

	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			putchar('');
		}
		else
		{
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
