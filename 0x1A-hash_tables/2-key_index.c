#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: this is the key
 * @size: size of the array of hash table
 *
 * Return: index on sucess
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
