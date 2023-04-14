#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change for an amount of money
 *
 * @argc: number of arguments passed
 * @argv: an array of elements passed
 *
 * Return: 0 on success, and 0 if failed
 */

int main(int argc, char *argv[])
{
	int coin;
        int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}

		if ((cent - 10) >= 0)
		{
			cent-= 10;
		}
		if ((cent - 5) >= 0)
                {
                        cent -= 5;
                        continue;
                }
		if ((cent - 2) >= 0)
                {
                        cent -= 2;
                        continue;
                }
		cent--;

	}

	printf("%d\n", coin);

	return (0);
}
