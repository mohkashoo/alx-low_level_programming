#include "lists.h"

/**
 *listint_len - element number as return
 *@j: listint_t linked type
 *
 *Return: nodes number
 */

size_t listint_len(const listint_t *j)

{
	size_t ber = 0;

	while (j)

	{
		ber++;

		j = j->next;
	}

	return (ber);

}
