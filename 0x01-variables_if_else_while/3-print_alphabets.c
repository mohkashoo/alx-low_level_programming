#include <stdio.h>

/**
  * main - print alphapet
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char uppercase = 'A';

	char lowercase = 'a';

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;

	}
	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');
	return (0);
}
