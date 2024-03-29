#include "hash_tables.h"
/**
 * hash_table_get - get a hash table
 * @ht: the hash table
 * @key: the key
 * Return: the value associated withthe key or NULL if no value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
