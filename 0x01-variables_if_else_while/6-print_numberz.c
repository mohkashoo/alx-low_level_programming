#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{

	putchar(num);
	num++;

	}

	putchar('\n');

	return (0);
}
