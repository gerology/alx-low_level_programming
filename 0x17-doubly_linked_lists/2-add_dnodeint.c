#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 *
 * @head: head pointer
 * @n: integer
 *
 * Return: new node, NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnd;

	newnd = malloc(sizeof(dlistint_t));

	if (newnd == NULL)
	{
		return (NULL);
	}

	newnd->n = n;
	newnd->prev = NULL;
	newnd->next = *head;

	if (*head != NULL)
		(*head)->prev = newnd;

	*head = newnd;

	return (newnd);

}
