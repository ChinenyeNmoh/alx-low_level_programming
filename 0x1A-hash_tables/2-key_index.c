#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 *
 * @key: The key to be searched.
 * @size: size of the array of a hash table.
 * Return: Index where the key is located in.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*using hash_djb2 alogrithm*/
	return (hash_djb2(key) % size);
}
