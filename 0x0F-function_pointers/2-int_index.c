#include "function_pointers.h"
/**
 *int_index - Returns the index of the first element in the array for which
 *             the comparison function returns true.
 *@arr: arr
 *@size: size of elements in array
 *@cmp: Pointer to a function that takes an integer and returns an integer.
 *Return: 0
 *
 */
int int_index(int *arr, int size, int (*cmp)(int))
{
	int index;

	if (arr == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(arr[index]))
			return (index);
	}

	return (-1);
}
