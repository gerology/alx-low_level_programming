#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 *
 * @head: head pointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);

		if (head->str == NULL)
			continue;
		
		free(head);
		head = tmp;
	}

	free(tmp);
	free(head);
}
