#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: pionter to a string of 0 and 1 chars
 *
 * Return: - converted number, 0 if b is invalid or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i = 0;
	unsigned int len, base = 1;

	len = strlen(b);

	if (b == NULL)
		return (0);
	if (b[i] == '1' || b[i] == '0')
	{
		for (i = (len - 1); i >= 0; i--)
		{
			if (b[i] == '1')
				conv += base;
			base *= 2;
		}
	}
	return (conv);
}
