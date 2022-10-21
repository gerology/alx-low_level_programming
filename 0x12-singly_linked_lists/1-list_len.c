#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to the starting address of the list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *tmp;

	tmp = h;

	for (i = 0; tmp ; i++)
		tmp = tmp->next;
	return (i);
}
