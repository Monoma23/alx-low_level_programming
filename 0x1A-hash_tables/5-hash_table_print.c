#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_print - prints  hash table
 * @ht: ptr to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *my_node;
	unsigned long int j;
	unsigned char cmma_flg = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (cmma_flg == 1)
				printf(", ");

			my_node = ht->array[j];
			while (my_node != NULL)
			{
				printf("'%s': '%s'", my_node->key, my_node->value);
				my_node = my_node->next;
				if (my_node != NULL)
					printf(", ");
			}

			cmma_flg = 1;
		}
	}
	printf("}\n");
}
