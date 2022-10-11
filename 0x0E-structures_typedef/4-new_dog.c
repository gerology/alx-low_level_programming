#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog and storrs a copy of name and owner
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer if success, and NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned  int n, o, i;
	dog_t *puppy;

	if (name == NULL || owner == NULL)

		return (NULL);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n++;
	
	puppy->name = malloc(sizeof(char) * n);

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		puppy->name[i] = name[i];
	
	puppy->age = age;

	for (o = 0; owner[o]; o++)
		;
	o++;

	puppy->owner = malloc(sizeof(char) * o);

	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	
	for (i = 0; i < o; i++)

		puppy->owner[i] = owner[i];

	return (puppy);
}
