#include "main.h"

/**
 *
 * _strncpy - copies a string
 * dest: variable to append by src
 * src: variable that appends dest
 * @n: largest byte to append
 * Return: dest adress
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
