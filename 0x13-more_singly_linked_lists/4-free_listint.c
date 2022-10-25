#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - releases memory allocated for operation
 *
 * @head: pointer to the address of allocated memory
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *all = head;

	while (all->next != NULL)
	{
		listint_t *tmp = all;
		all = all->next;
		free(tmp);

	}
	free(all);
}
