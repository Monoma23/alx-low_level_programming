#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_get - get value associated with
 *                  a key
 * @ht: A ptr to the hash table
 * @key: key to get the value
 *
 * Return:  key not matched - NULL.
 *         ifnot - value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *myNode;
	unsigned long int idx;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	myNode = ht->array[idx];
	while (myNode && strcmp(myNode->key, key) != 0)
		myNode = myNode->next;

	return ((myNode == NULL) ? NULL : myNode->value);
}
