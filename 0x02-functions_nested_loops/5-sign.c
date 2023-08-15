#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * This function returns the sign of the provided integer 'n' as follows:
 * '+' for positive numbers, '-' for negative numbers, and '0' for zero.
 *
 * @n: The integer number to check.
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero.
 */

int print_sign(int n)

{
	if (n > 0)

	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)

	{
		_putchar('0');
		return (0);
	}

	else

	{
		_putchar('-');
		return (-1);
	}
}
