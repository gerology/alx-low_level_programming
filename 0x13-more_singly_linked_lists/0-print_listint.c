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

	const listint_t *out = NULL;

	if (h == NULL)
	{
		printf("Empty list");
		h = out;
	}
	out = h;
	while (out->next != NULL)
	{
		printf("%d\n", out->n);
		++i;
		out = out->next;
	}
	return (i);
}
