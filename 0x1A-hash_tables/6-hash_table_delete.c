#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_delete - hash table eleminated
 * @ht: ptr to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *myHead = ht;
	hash_node_t *myNode, *temporaire;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			myNode = ht->array[k];
			while (myNode != NULL)
			{
				temporaire = myNode->next;
				free(myNode->key);
				free(myNode->value);
				free(myNode);
				myNode = temporaire;
			}
		}
	}
	free(myHead->array);
	free(myHead);
}
