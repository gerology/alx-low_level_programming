#include "dog.h"

/**
 * init_dog - function that initialize a variable type of type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * return void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name;
		d->age = age;
		d->owner = owner;
	}
}