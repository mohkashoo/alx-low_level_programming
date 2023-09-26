#include "lists.h"

/**
 *free_listint - give linked list a space
 *@head:zspaced list
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
