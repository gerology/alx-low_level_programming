#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: pointer - points to struct
 * Return: pointer if success, and NULL if fail
 */

void print_dog(struct dog *d)
{
	char *msg = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %s\n", msg);
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: %s\n", msg);
		else
			printf("Owner: %s\n", d->owner);

	}
}
