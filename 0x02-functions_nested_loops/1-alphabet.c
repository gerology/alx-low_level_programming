#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by a new line
 *
 * main - print alphabet in lowercase followed by a new line
 *
 * return void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (void);
}
