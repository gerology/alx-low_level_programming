#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 *
 * @head: head pointer
 * @index: position of node to delete
 *
 * Return: i if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tp;
	tp = *head;

	for (; index != 0; index--)
	{
		if (tp == NULL)
			return (-1);
		tp = tp->next;
	}

	if (tp == *head)
	{
		*head = tp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	} else {

		tp->prev->next = tp->next;

		if (tp->next != NULL)
			tp->next->prev = tp->prev;
	}

	free(tp);
	return (1);
}
