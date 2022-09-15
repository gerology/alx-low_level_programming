#include <stdio.>
i
/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");/*infinitly(i++ doesn't exist)*/

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
