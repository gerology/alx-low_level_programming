#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints given numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: NULL if failed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int v;
        unsigned int i;

	va_list fad;

	va_start(fad, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(fad, int);
		printf("%d", v);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(fad);
}
