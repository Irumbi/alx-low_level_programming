#include "main.h"
/**
 *factorial - calculates the factorial of number
 *@n: the number for factorial calculation
 *
 *Return: on sucess factorial of n, on error -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
