#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *word_count - helper function to  Counts the number of words in a string.
 *@str: String to evaluate.
 *
 *Return: The number of words.
 */
int word_count(char *str)
{
		int count = 0, i = 0;

		while (str[i] != '\0')
		{
			if (str[i] != ' ')
			{
				count++;
				while (str[i] != ' ' && str[i] != '\0')
					i++;
			}
			else
				i++;
		}

		return (count);
	}

	/**
	 *strtow - Splits a string into words.
	 *@str: String to split.
	 *
	 *Return: Pointer to an array of strings on success or NULL on error.
	 */
	char **strtow(char *str)
	{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i, j, k, count;
	char **words;

	count = word_count(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (str[j] == ' ')
			j++;

		k = j;
		while (str[k] != ' ' && str[k] != '\0')
			k++;

		words[i] = malloc((k - j + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (; j < k; j++)
			words[i][j - (j - i)] = str[j];
		words[i][j - (j - i)] = '\0';
	}

	words[count] = NULL;
	return (words);
}
