#include "main.h"

/**
 * _calloc - allocates memory for array
 *
 * @nmemb: - elements of array
 * @size: size of elements
 *
 * Return: pointer to new memory, or NULL if failed
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
		free(mem);
	}

	return (mem);

}
