#ifndef _DOG_H_
#define _DOG_H_
int _putchar(char c);
/**
 * struct dog - defines a new type
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
/**
 * dog_t - attrubute for new dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif/*!DOG_H*/
