#include "lists.h"
#include <stdlib.h>

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
	listint_t *tmp = NULL;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;

	tmp->next = *head;
	*head = tmp;

	return (*head);

}
