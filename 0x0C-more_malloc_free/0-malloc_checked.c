#include "main.h"
#include <stdlib.h>

/**
 *Malloc_checked - Allocates memory using malloc.
 *@b: Number of bytes to allocate
 *
 *Return: Pointer to allocated memory
 *on failure return normal process termination with value 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
