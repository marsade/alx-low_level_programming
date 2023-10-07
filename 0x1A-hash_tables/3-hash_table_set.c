#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key.
 * Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *current_node;
	unsigned long int hash_index, i;

	hash_index = key_index((const unsigned char *)key, ht->size);
	if (key[0] == '\0' || key == NULL || value == NULL || ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node);
		return (0);
	}
	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	if (ht->array[hash_index] == NULL)
		ht->array[hash_index] = new_node;
	else
	{
		current_node = ht->array[hash_index];
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (1);
}
