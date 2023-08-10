#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate a mmry block using malloc & free
 * @ptr: ptr to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new mmry block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptrr1;
char *oldPointer;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (!ptr)
return (malloc(new_size));

ptrr1 = malloc(new_size);
if (!ptrr1)
return (NULL);

oldPointer = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
ptrr1[i] = oldPointer[i];
}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrr1[i] = oldPointer[i];
	}

	free(ptr);
	return (ptrr1);
}

