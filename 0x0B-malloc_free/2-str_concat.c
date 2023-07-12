#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @str1: The first string to concatenate.
 * @str2: The second string to concatenate.
 *
 * Return: On success, a pointer to the newly allocated space
 *         Otherwise, return NULL.
 */
char *str_concat(char *str1, char *str2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (str1 != NULL)
	{
		while (str1[len1] != '\0')
			len1++;
	}
	if (str2 != NULL)
	{
		while (str2[len2] != '\0')
			len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Concatenate str1 and str2 */
	for (i = 0; i < len1; i++)
		concat[i] = str1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = str2[j];
	concat[i + j] = '\0';

	return (concat);
}

