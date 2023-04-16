#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: number of arguments
 * @av: an array of arguments
 *
 * Return: pointer if success, NULL if fail
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, len = 0, ind = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[ind++] = av[i][j];

		ptr[ind++] = '\n';
	}

	ptr[ind++] = '\0';

	return (ptr);
}
