#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: set of numbers
 * @index: specified bit to return value from
 * Return: value of bit at index, -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	
	return (1);
}
