#include "lists.h"

/**
 *print_listint - display element
 *@u: display list that linked
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *u)
{
	size_t ber = 0;
	while (u)
	{
		printf("%d\n", u->n);
		ber++;
		u = u->next;
	}

	return (ber);
}
