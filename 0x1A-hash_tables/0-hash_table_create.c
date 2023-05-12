#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of array
 *
 * Return: NULL if failed, pointer if successful
 * 
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int g;

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_table_t) * size);

	if (ptr -> arry == NULL)
		return (NULL);

	for (g = 0; i < size; i++)
		ptr->array[i] = NULL;

	return (ptr);
}
