#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - Creates new my_node and affects key and value to it
 * @ht: hash table where you want to add a value into
 * @key: the key
 * @value: associated value
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *my_node, *temporaire;
	unsigned long int idx;

	if (key == 0)
		return (0);
	if (ht == NULL)
		return (0);
	my_node = malloc(sizeof(hash_node_t));
	if (my_node == NULL)
		return (0);
	my_node->key = strdup(key);
	my_node->value = strdup(value);
	idx = key_index((void *)key, ht->size);
	temporaire = ht->array[idx];
	if (ht->array[idx] != NULL)
	{
		temporaire = ht->array[idx];
		while (temporaire != NULL)
		{
			if (strcmp(temporaire->key, my_node->key) == 0)
				break;
			temporaire = temporaire->next;
		}
		if (temporaire == NULL)
		{
			my_node->next = ht->array[idx];
			ht->array[idx] = my_node;
		}
	}
	else
		my_node->next = NULL, ht->array[idx] = my_node;
	return (1);
}
