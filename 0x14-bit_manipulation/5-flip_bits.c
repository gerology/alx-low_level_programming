#include "main.h"
# define size (sizeof(int) * 8)
/**
 * flip_bits - returns the number of bits needed to flip from one number to another
 *
 * @n: given number
 * @m: another given numberi
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0, k, l;
	int i;

	for (i = size; i >= 0; i--)
	{
		k = (n >> i) & 1;
		l = (m >> i) & 1;

		if (k != l)
			sum += 1;
		continue;
	}
	return (sum);


}
