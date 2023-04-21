#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 *
 * @head: head pointer
 * @n: integer
 *
 * Return: a new list, and NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tail = *head;
	
	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new;
	new->prev = tail;
	return (new);
}
