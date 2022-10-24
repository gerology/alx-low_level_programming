#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of a list
 *
 * @h: pointer to the start addresss of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		printf("Empty list");

	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	printf("%d", i);
	return (i);
}
