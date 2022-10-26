#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - return the nth node off a linked list
 * @head: pointer to start address of linked list
 * @index: index of nth node
 *
 *Return: address of nth node, NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr, *in;
	unsigned int i = 0;

	curr = malloc(sizeof(listint_t));

	if (head == NULL)
	{
		return (NULL);
		head = curr;
	}
	in = head;
	for (i = 0; i < index; i++)
	{
		in = in->next;
		if (i == index)
		{
			continue;
		}
	}
	return (in);
}
