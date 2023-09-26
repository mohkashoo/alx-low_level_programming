#include "lists.h"

/**
 *pop_listint - head node deletion
 *@head: to the number one ptr element
 *
 *Return: inside deleted 1 or 0
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;

	int ber;

	if (!head || !*head)

		return (0);

	ber = (*head)->n;

	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (ber);

}
