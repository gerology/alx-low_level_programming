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

	ptr = malloc(sizeof(hash_table_t) * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
