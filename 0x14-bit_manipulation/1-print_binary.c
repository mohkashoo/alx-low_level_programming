#include "main.h"

/**
 *print_binary - display binary equivalent of a decimal
 *@n: binar6 to print
 */

void print_binary(unsigned long int n)

{
	int i, calc = 0;

	unsigned long int exact;

	for (i = 63; i >= 0; i--)

	{
		exact = n >> i;

		if (exact & 1)

		{

			_putchar('1');

			calc++;
		}
		else if (calc)

			_putchar('0');
	}

	if (!calc)

		_putchar('0');

}

