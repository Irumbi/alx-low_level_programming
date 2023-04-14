#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocate zero-initialized memory for an array
 *@nmemb: Nu,ber of elements in the array
 *@size: Size of each element in bytes
 *
 *Return: Pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
