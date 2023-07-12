#include "main.h"
#include <stdlib.h>

/**
 *create_array - create an aaray of chars
 *
 *@size: The size of the array to create.
 *@c: the character to initialize the array with
 *
 *Return: A pointer to the created array,or 0  otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (0);
	arr = malloc(sizeof(char) * size);
	if (arr == 0)
	return (0);
	for (i = 0; i < size; i++)
	arr[i] = c;

	return (arr);
}
