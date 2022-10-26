#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints the elements of a list
 *
 * @head: pointer to the start addresss of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
