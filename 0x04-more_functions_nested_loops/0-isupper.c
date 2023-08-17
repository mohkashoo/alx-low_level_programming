#include "main.h"

/**
 * _isupper - Display if char is upper case ad print 1 or 0
 *
 * @c: The character to be taested for uppercase
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);

}
