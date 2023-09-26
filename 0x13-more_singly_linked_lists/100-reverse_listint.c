#include "lists.h"


/**
 * reverse_listint - reversesto  a linked list
 * @head: number one node ptr
 * Return: ptr to new list
 */

listint_t *reverse_listint(listint_t **head)

{

        listint_t *back = NULL;

        listint_t *up = NULL;


        while (*head)

        {

                up = (*head)->up;

                (*head)->up = back;

                back = *head;

                *head = up;

        }


        *head = back;


        return (*head);

}


