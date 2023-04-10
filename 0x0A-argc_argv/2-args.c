#include <stdio.h>

/**
 * main - print all recieved arguments
 *
 * @argc: number of arguments
 * @argv: ain array of supplied arguments
 *
 * Return: Akways 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
