#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates or the arguments of the program
 *@ac: Number of arguments
 *@av: Ayyars of arguments
 *
 *Return: Pointer to a new string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
