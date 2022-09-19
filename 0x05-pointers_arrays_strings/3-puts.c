#include "main.h"

/**
 * _puts - prints string
 *
 * @str: string
 *
 * return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')

	{
		put(str[i]);
		i++;
	}

	return (void);
}
