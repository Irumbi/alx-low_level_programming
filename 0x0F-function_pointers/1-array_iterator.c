#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @action: Pointer to the function that needs to be executed on each element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iterator;

	if (array == NULL || action == NULL)
		return;

	for (iterator = 0; iterator < size; iterator++)
	{
		action(array[iterator]);
	}
}
