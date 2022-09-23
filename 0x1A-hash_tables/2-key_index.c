#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 * @key: the key
 * @size: size of the array
 * Return: index of the key/value pair in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
