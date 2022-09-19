#include "main.h"

/**
 *puts_half - prints half of a string
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{

	int i, j, all;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	all = i;
	j = all / 2;

	while (j <= all)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}

