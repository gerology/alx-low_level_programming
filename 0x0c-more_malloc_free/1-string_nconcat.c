#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to copy from second string
 *
 * Return: pointer to new address, or Null if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	len = len1 + len2;

	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len + 1));
	} else
	{
		ptr = malloc(sizeof(char) * (n + 1));
	}

	if (ptr == NULL)
                return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[i] && i <= n; i++)
		ptr[len++] = s2[i];

	ptr[len] ='\0';

	return (ptr);

}
