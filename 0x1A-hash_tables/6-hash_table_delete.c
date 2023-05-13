#include"hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes hash table
 *
 * @ht: hash table to delete
 *
 * Return: void
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	hash_node_t *node2;

	if (ht == NULL)
		return;

	for(i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			node2 = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = node2;
		}
	}


	free(ht->array);
	free(ht);
}
