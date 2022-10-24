#include "lists.h"
#include <stdlib.h>


/**
 * listint_len - returns the number of elements in a list
 *
 * @h: pointer to the first address of linked list
 *
 * Reurn: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int noe = 0;

	while (h != NULL)
	{
		++noe;
		h = h->next;
	}
	return (noe);
}
