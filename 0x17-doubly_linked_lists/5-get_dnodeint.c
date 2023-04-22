#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list
 *
 * @head: head pointer
 * @index: position of nth node
 *
 * Return: adress of node, or NULL if it doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);

}
