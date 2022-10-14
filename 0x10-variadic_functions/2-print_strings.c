#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints given strings
 *
 * @separator: string printed betwen strings
 * @n: number of strings in the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char * strg;

	va_list dan;

	va_start(dan, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(dan, char *);
		if (strg)
		{
			printf("%s", strg);
		}
		else
		{
			printf("nil");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(dan);
}
