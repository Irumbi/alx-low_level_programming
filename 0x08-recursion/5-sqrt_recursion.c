#include "main.h"
/**
 *_sqrt_recursion - computes the square root of a number
 *@n: the number to compute square root of
 *
 *Return: on success square root of n, -1 on error
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
			return (i);
		else if (i * i > n)
			break;
	}
	return (_sqrt_recursion(n / 2));
}
