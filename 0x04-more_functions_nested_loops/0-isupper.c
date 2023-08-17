#include "main.h"

/**
 * _isupper - Display if char is upper case ad print 1 or 0
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);

}
