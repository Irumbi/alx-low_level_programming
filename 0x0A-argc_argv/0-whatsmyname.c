#include "main.h"
#include <stdio.h>

/**
 *main - Entry point.
 *
 *@argc: Argument count
 *@argv: Array of points to argumants
 *
 *Return:Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
