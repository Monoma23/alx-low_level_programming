#include "hash_tables.h"

/**
 * key_index - returns my_index of a key.
 * @key: key
 * @size: size of array of  hash table
 * Return: the my_index where key/value should be stored
 * in the array of our hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int my_index = 0, count = 0;

	while (key && key[count])
	{
		my_index = hash_djb2(key) % size;
		++count;
	}
	return (my_index);
}
