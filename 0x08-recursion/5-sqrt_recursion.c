#include "main.h"
/**
 *_sqrt_recursion - computes the square root of a number
 *@n: the number to compute square root of
 *
 *Return: on success square root of n, -1 on error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, 0));
}
