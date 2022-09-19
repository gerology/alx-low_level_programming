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
	char str = "i will make it";
	int i;

	while (str[i] != '\0')

	{
		_putchar(str[i]);
		i++;
	}
}
