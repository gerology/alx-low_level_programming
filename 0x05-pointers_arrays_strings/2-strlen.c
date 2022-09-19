# include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: is a string
 *
 *
 * Return: length of string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != \'0')
	{
		len++;
	}

	return (len);

}
