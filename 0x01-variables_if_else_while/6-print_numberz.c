#include <stdio.h>
/**
 *main - entry point
 *description - 'print single digits numbers of base 10 from 0'
 *Return: 0
*/
int main(void)
	{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar("%d", n);
	}
	putchar("\n");
	return (0);
	}
