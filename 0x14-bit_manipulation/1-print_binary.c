#include "main.h"
#include <string.h>
/**
 * print_binary - prints binary representation of a number
 *
 *@n: given number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, p;
	unsigned long int l = strlen(n);
	for (i = (l - 1); i >= 0; i--)
	{
		p = n >> i;
		if (p & 1)
		{
			_putchar('1');
		} else
		{
			_putchar('0');
		}

	}
}
