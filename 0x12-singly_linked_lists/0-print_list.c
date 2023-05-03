#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a given list
 *
 * @list_t: given list
 * @h: pointer to the beginning of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
