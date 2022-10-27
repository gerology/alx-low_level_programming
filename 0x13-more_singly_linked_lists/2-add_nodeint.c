#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds a node at the beginning of a linked list
 *
 * @head: pointer to the start address of the linked list
 * @n: integer to be added
 *
 * Return: return the address of the new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	if (head == NULL)
	{
		return (NULL);
	}
	if (tmp == NULL)
		return (NULL);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
