#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns the sum of parameters
 *
 * @n: number of arguments
 * @total: some of all arguments
 * Return: total if successful, 0 if failed
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list ags;

	va_start(ags, n);
	for (i = 0; i < n; i++)
		total += va_arg(ags, int);
	va_end(ags);
	return (total);
}
