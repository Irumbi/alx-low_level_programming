#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *from min to max (inclusive)
 *
 *@min: The minimum value of integers in the array.
 *@max: The maximum value of integers in the array.
 *
 *Return: A pointer to the created array, otherwise NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size;  i++)
		arr[i] = min++;
	return (arr);
}
