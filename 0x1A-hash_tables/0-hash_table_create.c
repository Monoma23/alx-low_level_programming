#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * *hash_table_create - it creates a hash table
 * @size: array size
 *
 * Return: Ptr to the newly hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nouveaTableau;

	if (size < 1)
		return (NULL);
	nouveaTableau = malloc(sizeof(hash_table_t));
	if (nouveaTableau == NULL)
		return (NULL);
	nouveaTableau->size = size;
	nouveaTableau->array = malloc(sizeof(hash_table_t));
	if (nouveaTableau->array == NULL)
		return (NULL);
	memset(nouveaTableau->array, 0, sizeof(hash_table_t));
	return (nouveaTableau);
}
