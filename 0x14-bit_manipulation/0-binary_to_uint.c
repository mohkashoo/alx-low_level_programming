#include "main.h"

/**
 *binary_to_uint - from bin to int
 *@b: the binary string
 *Return: the modified number
 */

unsigned int binary_to_uint(const char *b)

{
	int i;

	unsigned int mal_val = 0;

	if (!b)

		return (0);

	for (i = 0; b[i]; i++)

	{
		if (b[i]<'0' || b[i] > '1')

			return (0);

		mal_val = 2 *mal_val + (b[i] - '0');
	}

	return (mal_val);

}
