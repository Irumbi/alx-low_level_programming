#include <stdio.h>

/**
 * print_name - Prints the given name using a function pointer.
 *
 * @name: Pointer to a null-terminated string (the name to be printed).
 * @f: Pointer to the function that prints the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
