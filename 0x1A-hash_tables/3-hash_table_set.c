#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new = NULL, *test = NULL;

	if (!ht || !(ht->array) || !value || !key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	/* Collision testing*/
	test = ht->array[idx];
	while (test != NULL)
	{
		if (strcmp(test->key, key) == 0)
		{
			free(test->value);
			test->value = strdup(value);
			return (1);
		}
		test = test->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
