#include "main.h"
/**
 *print_square - prints a square of agiven size
 *@size: soze of thr square to be printed
 *
 *Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
