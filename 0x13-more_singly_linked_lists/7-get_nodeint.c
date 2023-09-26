#include "lists.h"

/**
 *get_nodeint_at_index - index certian node return
 *@head: number one node ptr linked list
 *@nodex: return node index
 *
 *Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int nodex)

{
	unsigned int j = 0;

	listint_t *temp = head;

	while (temp && j < nodex)

	{
		temp = temp->next;

		j++;
	}

	return (temp ? temp : NULL);

}
