#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints strings and numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));

	n = rand();
	lastDigit = n % 10;
	if (lastDigit > 5)
	{

	printf("Last digit of %d is %d amd is greator than 5\n", n, lastDigit);

	}

	else if (lastDigit == 0)
	{

	printf("Last digit of %d is %d and is 0\n", n, lastDigit);

	} else

	{

printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);

	}

return (0);

}
