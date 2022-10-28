#include "main.h"

/**
 * clear_bit - set the bit value to 0 at index
 *
 * @n: given number
 * @index: given index
 *
 * Return: 1 if successful, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);

	return (1);
}
