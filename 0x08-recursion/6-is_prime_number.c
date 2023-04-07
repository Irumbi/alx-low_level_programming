#include "main.h"
/**
 *is_prime_number - check if a number is a prime number
 *@n: the number to check
 *@i: the current divisor to check
 *
 *Return: on sucess 1, otherwise 0
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i * i > n)
		return (1);
	else if (n % 1 == 0)
		return (0);
	else
		return (is_prime_number_helper(n, i + 1));
}

/**
 *is_prime_number - check if a number is prime
 *@n: the number to check
 *
 *Return: on success 1, otherwise 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
