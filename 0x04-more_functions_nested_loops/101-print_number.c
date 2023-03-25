#include "main.h"
/**
 *print_number  -  prints an integer
 *@n: the integer to be printed
 *
 *Return: void
 */
void print_number(int n)
{
	int digit, is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		is_negative = 1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	digit = n % 10;

	_putchar(digit + '0');
	if (is_negative)
	{
		_putchar('-');
	}
}

