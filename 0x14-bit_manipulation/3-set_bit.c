#include "main.h"

/**
 *set_bit - set bits to 1 as an index
 *a: number ofto change  ptr
 *@index: the seted to 1
 *Return: -1 faild 1 success
 */

int set_bit(unsigned long int *a, unsigned int index)

{
	if (index > 63)

		return (-1);

	*a = ((1UL << index) | *a);

	return (1);

}
