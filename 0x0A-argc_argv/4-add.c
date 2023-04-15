#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *is_digit - checks if a character is a digit
 *@c: The character to check
 *
 *Return: 1 if c is a digit, 0 otherwise
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 *main - Entry point
 *@argc: The argument count
 *@argv: The argument vector
 *
 *Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
