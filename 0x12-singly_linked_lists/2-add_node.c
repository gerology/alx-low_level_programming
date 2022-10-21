#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int s;

	for (s = 0; str[s]; s++)
		;
	return (s);
}

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->len = _strlen(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
