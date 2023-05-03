#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node at the end of list
 *
 * @h: head pointer
 * @str: malloc'ed string
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd, *tmp;
	char *copy;
	int n;

	nd = malloc(sizeof(list_t));

	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	copy = strdup(str);

	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}

	for (n = 0; str[n];)
                n++;

	nd->str = copy;
	nd->len = n;
	nd->next = NULL;

	if (*head == NULL)
		*head = nd;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = nd;
	}

	return (*head);
}
