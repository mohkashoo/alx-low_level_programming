#include "main.h"

/**
 *get_endianness - make a check if machine is smaĺ or larg
 *Return: 0 for small 1 for larg
 */

int get_endianness(void)

{
	unsigned int i = 1;
	char *c = (char*) &i;

	return (*c);

}
