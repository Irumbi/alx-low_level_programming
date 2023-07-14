#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, i;

	s1 = (s1 == NULL ? " " : s1);
	s2 = (s2 == NULL ? " " : s2);

	s1_len = 0;
	while (s1[s1_len] != '\0')
	s1_len++;

	s2_len = 0;
	while (s2[s2_len] != '\0')
	s2_len++;

	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	result[i] = s1[i];

		return (result);
}

