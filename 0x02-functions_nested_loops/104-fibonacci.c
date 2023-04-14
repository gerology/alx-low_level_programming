#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int c = 2, i;
	unsigned long fib[98];
	fib[0] = 0;
	fib[1] = 1;

	while (c <= 92)
	{
		fib[c] = fib[c - 1] + fib[c - 2];
		c++;
	}

	for (i = 0; i < 98; i++)
	{
		printf("%lu, ", fib[i]);
	}

	return (0);

}
