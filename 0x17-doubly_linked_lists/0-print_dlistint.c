#include "lists.h"

/**
 * print_dlistint - print all elements of dlistint_t list
 *
 * @h: head pointer
 *
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		++node;
		h = h->next;
	}

	return (node);

}
