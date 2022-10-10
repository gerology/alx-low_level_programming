#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable type of type struct dog
 * return void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d -> name;
		d -> age = age;
		d -> owner = owner;
	}
}
