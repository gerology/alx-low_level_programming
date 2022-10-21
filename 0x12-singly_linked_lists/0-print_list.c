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
	unsigned int i;
	unsigned int num = 0;
	const list_t *temp;

	temp = h;

	if (temp == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (temp != NULL)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		num = num + i;
		++i;
	}


	return (num);
}
