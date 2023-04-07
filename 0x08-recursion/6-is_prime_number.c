#include "main.h"
/**
 *is_prime_number - check if a number is a prime number
 *@n: the number to check
 *
 *Return: on sucess 1, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
