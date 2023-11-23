#include "main.h"

/**
 *clear_bit - reset the vlue to zero
 *@a: to a changed number ptr
 *@index: for the bit that we set to zero
 *Return: -1 falid 1 success
 */

int clear_bit(unsigned long int *a, unsigned int index)

{
	if (index > 63)

		return (-1);

	*a = (~(1UL << index) & *a);

	return (1);

}

