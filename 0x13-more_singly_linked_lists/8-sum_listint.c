#include "lists.h"

/**
 *sum_listint - result of calculation
 *@head: numberone linked list head
 *
 *Return: result
 */

int sum_listint(listint_t *head)

{
	int res = 0;

	listint_t *temp = head;

	while (temp)

	{
		res += temp->n;

		temp = temp->next;
	}

	return (res);

}
