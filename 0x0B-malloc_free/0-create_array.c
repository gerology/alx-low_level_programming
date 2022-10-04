#include "main.h"

/**
 * create_array - create an array of characters
 * @c: character strings
 * @size: size of array
 *
 * Return: pointer if success or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0)
		return (NULL);
	v = malloc(size * sizeof(char));
	if (v == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}
	return (v);
}
