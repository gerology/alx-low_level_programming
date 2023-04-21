#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @dlistint_t: list to print from
 * @h: head pointer
 *
 * Return: number of elements, NULL if fail
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elm =0;

	while (h)
	{
		++elm;
		h = h->next;
	}

	return (elm);
}
