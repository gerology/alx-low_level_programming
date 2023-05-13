#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieve a value associatd with key
 *
 * @ht: the hash table to retrieve from
 * @key: key of the value to be retrieved
 *
 * Return: value associated with key, or NULL if failed
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index, i;
	char * value = "";

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	
	if (index >= ht->size)
		return (NULL);

	i = index;

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			value = ht->array[i]->value;

		i++;
	}

	return (value);
}
