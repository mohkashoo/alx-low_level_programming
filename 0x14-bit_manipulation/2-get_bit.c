#include "main.h"

/**
 *get_bit - returns decimal number
 *@a: searched number
 *@index: bit index
 *Return: bit value
 */

int get_bit(unsigned long int a, unsigned int index)

{
	int gold_bit;

	if (index > 63)

		return (-1);

	gold_bit = (a >> index) & 1;

	return (gold_bit);

}

