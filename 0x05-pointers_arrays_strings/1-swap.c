#include "main.h"

 /**
 *swap_int - swaps the values of two integers
 *@n: pointer to the first integer
 *@b: pointer to the second integer
 *
 *This function takes two pointers and swap the them
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int temp_val = *a;

	*a = *b;
	*b = temp_val;
}
