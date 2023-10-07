#include "hash_tables.h"
/**
 * key_index - gives the index of the key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);
	return (hash_key % size);
}
