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
	int *v;
	unsigned int i;

	if (size == 0)
		return (NULL);
	v = malloc(sizeof(char) * size);
	if (v == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
	v[0] = c;
	}
	return (v);

}
