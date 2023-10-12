#include "main.h"
#include <main.h>

/**
* positive_or_negative - tests function that prints if integer is positive or negative
* @i: integer
* Return: 0
*/

void positive_or_negative(int i)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
