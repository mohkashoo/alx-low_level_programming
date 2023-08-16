#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
    int r, c, res;

	for (r = 0; r <= 9; r++)
	{
	for (c = 0; c <= 9; c++)
	{
	res = r * c;
	if (c) printf(",  ");
	printf("%d", res);
	}
	printf("\n");
	}
}
