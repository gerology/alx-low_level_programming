#include "lists.h"

/**
 * free_dlistint - frees the dlistint_t list
 *
 * @head: head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	cur = head;

	while (head)
	{
		cur = cur->next;
		free(head);
		head = cur;
	}

}
