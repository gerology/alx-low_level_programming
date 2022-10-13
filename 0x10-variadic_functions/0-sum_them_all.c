#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - returns the sum of parameters
 *
 * @n: number of arguments
 * @sum: some of all arguments
 * Return: sum if successful, 0 if failed
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;

	va_list arg;

	va_start(arg, n);


	if (n != 0)
	{
		unsigned int i;
		int go;

		for (i = 0; i < n; i++)
		{
			go = va_arg(arg, int);

			total += go;
		}

	}
	va_end(arg);
	return (total);
}
