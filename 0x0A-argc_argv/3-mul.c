#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 when successful, else 1 if fail
 */

int main(int argc, char *argv[])
{
	int ent1, ent2, mul;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);
	}

	ent1 = atoi(argv[1]);
	ent2 = atoi(argv[2]);
	mul = ent1 * ent2;
	printf("%d\n", mul);

	return (0);
}
