#include "main.h"
#include <stdio.h>

/**
 *main - Entry point
 *
 *@argc: Argument count.
 *@argv: Array of pointers to arguments.
 *
 *Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
