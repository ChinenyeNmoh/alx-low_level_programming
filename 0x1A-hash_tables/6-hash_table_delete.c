#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: hash table to be deleted.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!ht || !(ht->array))
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
