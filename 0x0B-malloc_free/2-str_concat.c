#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: o on success and NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int c;
	int len = 0, a = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	for (c = 0; s1[c] || s2[c]; c++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (c = 0; s1[c]; c++)
		ptr[a++] = s1[c];

	for (c = 0; s2[c]; c++)
		ptr[a++] = s2[c];

	return (ptr);
}
