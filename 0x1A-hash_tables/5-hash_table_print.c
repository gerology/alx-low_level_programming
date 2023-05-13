#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_print - print a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(",");
		}


	}
	printf("}\n");

}
