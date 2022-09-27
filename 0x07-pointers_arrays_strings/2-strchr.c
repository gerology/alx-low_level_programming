#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: is a string
 * @c: character to be located in string
 *
 * Return: pointer s if success and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (*(s + i) == c)
		return (s + i);

	return (0);
}
