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

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;

	for (; idx != 1; idx--)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);


	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
