#include <stdio.h>
/**
 *main - Entry point
 *Description - 'prints  all single digits of base 10 starting from 0'
 *Return: 0
*/
int main(void)
	{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
	}
