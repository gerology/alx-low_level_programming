#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * @head: pointer to the address of linkedl ist
 * @n: elements to add
 *
 * Return: adress of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nend;
	listint_t *tmp;

	nend = malloc(sizeof(listint_t));
	nend->n = n;
	nend->next = NULL;
	if (*head == NULL)
	{
		*head = nend;
		return (nend);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = nend;
	return (nend);
	free(nend);
	nend = NULL;
}
