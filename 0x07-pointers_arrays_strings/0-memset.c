#include "main.h"

/**
 * _memset - fill memory area with contant byte b
 * @s: memory area to be filled
 * @b: constant byte that fills memory
 * @n: bytes to be filled
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
