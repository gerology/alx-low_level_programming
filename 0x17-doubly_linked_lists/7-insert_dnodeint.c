#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a position
 *
 * @h: head pointer
 * @idx: index where where node is added
 * @n: integer to insert into node
 *
 * Return: address of new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	tmp = *h;

	for (i = 1; i < idx; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (tmp);
}
