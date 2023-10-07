#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of the hash table
 * Return: a pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_node_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
