#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a dlist_t
 *
 * @head: head pointer
 *
 * Return: sum of all data, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
