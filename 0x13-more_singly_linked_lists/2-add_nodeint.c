#include "lists.h"

/**
 *add_nodeint - fresh node adding
 *@n: node inseted
 *@head: the first node
 *
 *Return: Null or node ptr
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));

	if (!fresh)

		return (NULL);

	fresh->n = n;

	fresh->next = *head;

	*head = fresh;

	return (fresh);

}
