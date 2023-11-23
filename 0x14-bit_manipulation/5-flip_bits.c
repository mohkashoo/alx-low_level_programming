#include "main.h"

/**
 *flip_bits - calculatr the chnged bits
 *@n: number one
 *@m: number two
 *Return: changed bits number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, calc = 0;
	unsigned long int exact;
	unsigned long int fresh = n ^ m;

	for (i = 63; i >= 0; i--)

	{
		exact = fresh >> i;

		if (exact & 1)

			calc++;
	}

	return (calc);

}

