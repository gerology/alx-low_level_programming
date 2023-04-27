#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: memory size
 *
 * Return: pointer on success, or EXIT_STATUS 98
 */

void *malloc_checked(unsigned int b)
{
	void * ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
