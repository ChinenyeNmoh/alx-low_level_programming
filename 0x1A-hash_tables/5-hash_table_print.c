#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int idx = 0, count = 0, i;

	if (!ht || !(ht->array))
		return;

	idx = ht->size;

	/*counting hash nodes*/
	for (i = 0; i <= idx; i++)
	{
		node = ht->array[i];
		while (node)
		{
		count++;
		node = node->next;
		}
	}

	printf("{");
	for (i = 0; i <= idx; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (count > 1)
				printf("'%s': '%s', ", node->key, node->value);
			else
			{
				printf("'%s': '%s'", node->key, node->value);
			}

			node = node->next;
			count--;
		}
	}
	printf("}\n");
}
