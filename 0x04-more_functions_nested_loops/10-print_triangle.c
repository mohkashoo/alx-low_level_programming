#include "main.h"

/**
 * print_triangle - print squaries
 *
 * @size: contain the values
 *
 * Return: nothing 0
 */

void print_triangle(int size)

{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int row, column;

	for (row = 0; row < size; row++)
	{
	for (column = 0; column <= row; column++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
