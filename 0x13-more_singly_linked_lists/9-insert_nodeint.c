#include "lists.h"

/**
 *insert_nodeint_at_index - input node
 *@head: numberone ptr linked list
 *@index: the new node
 *@n: the holding value data
 *
 *Return: fresh node data or null
 */

listint_t* insert_nodeint_at_index(listint_t **head, unsigned int index, int n)

{
	unsigned int i;

	listint_t *fresh;

	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));

	if (!fresh || !head)

		return (NULL);

	fresh->n = n;

	fresh->next = NULL;

	if (index == 0)

	{
		fresh->next = *head;

		*head = fresh;

		return (fresh);
	}

	for (i = 0; temp && i < index; i++)

	{
		if (i == index - 1)

		{

			fresh->next = temp->next;

			temp->next = fresh;

			return (fresh);
		}
		else

			temp = temp->next;
	}

	return (NULL);

}
