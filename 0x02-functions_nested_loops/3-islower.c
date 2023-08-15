#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 *
 * @c: The ASCII value of the character to check.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)

{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
