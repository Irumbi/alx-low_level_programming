#include <stdio.h>
/**
*main - entry point
*description - 'program that print alphabet in lower case excluding e and q'
*Return: 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
	if (n !=  'e' &&  n !=  'q')
	{
		putchar(n);
	}
		n++;
	}
	putchar('\n');
	return (0);
}
