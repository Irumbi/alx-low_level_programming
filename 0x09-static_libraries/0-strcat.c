#include "main.h"

/**
 *_strcat - conacatenate two strings
 *dest: the destination string
 *@src: the source string
 *
 *Return: apointer to the reulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
