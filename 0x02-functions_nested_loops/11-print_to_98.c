#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to
 * separated by a comma and a space, using the standard library functions.
 *
 * @n: The starting number.
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i >= 98; i--)
	{
	printf("%d", i);
	if (i != 98)
	{
	printf(", ");
	}
	}

	printf("\n");
}


