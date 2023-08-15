#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 *
 * This function takes an ASCII value of a character and returns 1 if the
 * character is an alphabetic letter (either lowercase or uppercase),
 * or 0 if it is not.
 *
 * @c: The ASCII value of the character to check.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */

int _isalpha(int c)

{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
