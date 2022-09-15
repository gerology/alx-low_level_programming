#include "main.h"

/**
 * description - prints the alphabet 10 times
 *
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int rounds = 0;

	while (rounds < 10)
	{
		i = 'a';
		while (i < 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');

		rounds++;
	}
}
