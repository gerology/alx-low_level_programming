#include "main.h"

/**
 * puts2 - prints the alternate chars of string
 * @str: is a string
 * Return: void
 */

void puts2(char *str)
{

	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
