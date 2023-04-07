#include "main.h"
/**
 *sqrt_recursion_helper - computes square root of a number
 *@n: the number to compute the square root of
 *@i: the value to check
 *
 *Return: on succes square root of n, on error -1
 */
int sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_recursion_helper(n, i + 1));
}

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
		return (sqrt_recursion_helper(n, 0));
}
