#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *_realloc - reallocates a memory to block using malloc and free
 *
 *@ptr: pointer to the memory previously allocated with malloc
 *@old_size: size of the allocated space for ptr
 *@new_size: new size of the memory block
 *
 *Return: pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
