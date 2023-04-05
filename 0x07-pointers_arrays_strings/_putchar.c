#include <stdio.h>

/**
 *_putchar - writes a single character
 *@c: the character to print
 *
 *Return: 1 upon success and -1 otherwise
 */

int int_putchar(char c);
{
	return (write(1, &c, 1));
}
