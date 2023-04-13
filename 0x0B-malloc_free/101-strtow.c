#include "main.h"
#include <stdlib.h>

/**
 *count_words - Count the number o words in a string.
 *@str: The string to count the words.
 *
 *Return: The number of words in the string.
 */
static int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
	return (words);
}

/**
 *strtow - Split a string into words.
 *@str: The string to split.
 *
 *Return: A pointer to an array of strings
 *otherwise return NUll
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = count_words(str);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		while (str[k] == ' ')
			k++;
		len = 0;
		while (str[k + len] && str[k + len] != ' ')
			len++;
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[k++];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
