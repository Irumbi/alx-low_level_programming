#include "main.h"
/**
 *_sqrt_recursion_helper - computes the square root of a number
 *@n: the number to compute the square root of
 *@i: the value to check
 *
 *Return: on succes square root of n, on error -1
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, i + 1));
}
