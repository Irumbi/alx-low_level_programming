#include <stdio.h>

/**
 *main - prints the prime factors
 *
 *Return: always 0
 */

int main(void)
{
	long n = 612852475143;
	long largest_factor = 2;

	while (n > 1)
	{
		if (n % largest_factor == 0)
		{
			n /= largest_factor;
		}
		else
		{
		largest_factor++;
		}
	}
	printf("%ld\n", largest_factor);

	return (0);

}
