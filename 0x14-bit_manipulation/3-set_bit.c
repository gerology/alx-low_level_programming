#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 *
 * @n: given set of numbers
 * @index: point in set of numbers to set 1
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
