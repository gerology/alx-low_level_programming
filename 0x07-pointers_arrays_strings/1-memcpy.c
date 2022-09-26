#include "main.h"

/**
 *
 * _memcpy - copies bytes from one memory to another
 *
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n : number of bytes to copy
 *
 * Return: pointer (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
